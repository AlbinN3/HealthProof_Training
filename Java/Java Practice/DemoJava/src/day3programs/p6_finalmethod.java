package day3programs;

class base{
	/*final*/ void display() {
		System.out.println("Hii");
	}
}
class extended extends base{
	void display() {
		System.out.println("Will be errror");
	}
}
public class p6_finalmethod {

	public static void main(String[] args) {
		base obj = new base();
	}

}
/*
final as a variable - constant
final as a method - no overwriting
final as a class - no extend
*/