package day3programs;

class baseclass{
	int x=100;
}
class subclass extends baseclass{
	int x=102;
	void display() {
		System.out.println("x in subclass " +x);
		System.out.println("x in baseclass " +super.x);
	}
}
public class p4_super {

	public static void main(String[] args) {
		subclass obj = new subclass();
		obj.display();
	}

}
