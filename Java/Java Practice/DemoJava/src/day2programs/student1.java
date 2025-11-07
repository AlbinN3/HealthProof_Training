package day2programs;

class student1{
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
		System.out.println("Check if this is not the other student");
	}
}