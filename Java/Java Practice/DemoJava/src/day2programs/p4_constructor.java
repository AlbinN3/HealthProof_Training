package day2programs;

class studentagain{
	int roll;
	String name;
	String course;
	studentagain(){
		roll=1;
		name="Albin";course="CS";
	}
	void print() {
		System.out.println("Name is "+name);
		System.out.println("roll is "+roll);
		System.out.println("course is "+course);
	}
}
public class p4_constructor {

	public static void main(String[] args) {
		studentagain obj = new studentagain();
		obj.print();
	}

}
