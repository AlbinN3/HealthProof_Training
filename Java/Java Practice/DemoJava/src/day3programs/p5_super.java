package day3programs;

class testing{
	int x=100;
	void display() {
		System.out.println("x is "+x);
	}
}
class sampletesting extends testing{
	int x=102;
	void display() {
		System.out.println("x in subclass " +x);
		super.display();
	}
}
public class p5_super {

	public static void main(String[] args) {
		sampletesting obj = new sampletesting();
		obj.display();
	}

}
