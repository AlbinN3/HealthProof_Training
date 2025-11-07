package day3programs;
abstract class Employee{
	abstract void calculateSalary();
	abstract void displayInfo();
}
class Manager extends Employee{
	int salary;
	@Override
	void calculateSalary() {
		salary=1000;
	}
	@Override
	void displayInfo() {
		System.out.println("Salary for manager is "+salary);
	}
}
class Programmer extends Employee{
	int salary;
	@Override
	void calculateSalary() {
		salary=100;
	}
	@Override
	void displayInfo() {
		System.out.println("Salary for programmer is "+salary);
	}
}
public class exercise_5 {

	public static void main(String[] args) {
		Manager obj = new Manager();
		obj.calculateSalary();
		obj.displayInfo();
		Programmer obj1 = new Programmer();
		obj1.calculateSalary();
		obj1.displayInfo();
	}
}
