package day2programs;

class Person1{
	String name;
	int age;
	Person1(){
		name="Unknown";
		age=0;
	}
	Person1(String name, int age){
		this.name=name;
		this.age=age;
	}
	void print() {
		System.out.println("Name is "+name);
		System.out.println("Age is "+age);
	}
}
public class exercise_6 {

	public static void main(String[] args) {
		Person1 obj = new Person1();
		obj.print();
		Person1 obj1 = new Person1("Albin",22);
		obj1.print();
	}

}
