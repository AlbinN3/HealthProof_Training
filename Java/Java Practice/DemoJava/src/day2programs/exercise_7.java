package day2programs;

class Person2{
	String name;
	int age;
	Person2(){
		name="Unknown";
		age=0;
	}
	Person2(String name, int age){
		this.name=name;
		this.age=age;
	}
	Person2(String name){
		this.name=name;
		age=-1;
	}
	void print() {
		System.out.println("Name is "+name);
		System.out.println("Age is "+age);
	}
}
public class exercise_7 {

	public static void main(String[] args) {
		Person2 obj = new Person2();
		obj.print();
		Person2 obj1 = new Person2("Albin",22);
		obj1.print();
		Person2 obj2 = new Person2("Albin");
		obj2.print();
	}

}
