package day2programs;
class Rectangle{
	int length,width;
	Rectangle(int length, int width){
		this.length=length;
		this.width=width;
	}
	Rectangle(Rectangle o){
		length=o.length;
		width=o.width;
	}
	void print() {
		System.out.println("Length is "+length);
		System.out.println("Width is "+width);
	}
}
public class exercise_8 {

	public static void main(String[] args) {
		Rectangle obj1 = new Rectangle(10,11);
		obj1.print();
		Rectangle obj2 = new Rectangle(obj1);
		obj2.print();
	}

}
