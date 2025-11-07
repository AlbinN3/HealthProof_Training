package day2programs;

class overloadagain{
	void display() {
		System.out.println("Just a display");
	}
	void display(int a) {
		System.out.println("Has an argument "+a);
	}
	void display(String a) {
		System.out.println("Has a string argument "+a);
	}
	void display(int a, String b) {
		System.out.println("Has an integer argument "+a+" and a string argument "+b);
	}
}
public class exercise_4 {

	public static void main(String[] args) {
		overloadagain obj = new overloadagain();
		obj.display();
		obj.display(1);
		obj.display("Hello");
		obj.display(5,"Hi");
	}

}
