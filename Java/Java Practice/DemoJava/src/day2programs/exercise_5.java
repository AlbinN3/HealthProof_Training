package day2programs;

class Person{
	String name;
	int age;
	Person(){
		name="Unknown";
		age=0;
	}
	void print() {
		System.out.println("Name is "+name);
		System.out.println("Age is "+age);
	}
}
public class exercise_5 {

	public static void main(String[] args) {
		Person obj = new Person();
		obj.print();
		
	}

}
