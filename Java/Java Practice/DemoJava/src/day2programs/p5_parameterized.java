package day2programs;

class studentagain1{
	int roll;
	String name;
	String course;
	studentagain1(int roll, String name,String course){
		this.roll=roll;
		this.name=name;this.course=course;
	}
	void print() {
		System.out.println("Name is "+name);
		System.out.println("roll is "+roll);
		System.out.println("course is "+course);
	}
}
public class p5_parameterized {

	public static void main(String[] args) {
		studentagain1 obj = new studentagain1(1,"Albin","cs");
		obj.print();
	}

}
