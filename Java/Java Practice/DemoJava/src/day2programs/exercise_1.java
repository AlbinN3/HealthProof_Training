package day2programs;

class student{
	int roll;
	String name,course;
	void assignValues(int roll, String name, String course) {
		this.roll=roll;
		this.name=name;
		this.course=course;
	}
	void printValues() {
		System.out.println("Name is "+name);
		System.out.println("Roll is "+roll);
		System.out.println("Course enrolled is "+course);
	}
}
public class exercise_1 {

	public static void main(String[] args) {
		student obj = new student();
		obj.assignValues(8, "Albin" , "Testing");
		obj.printValues();
	}

}
