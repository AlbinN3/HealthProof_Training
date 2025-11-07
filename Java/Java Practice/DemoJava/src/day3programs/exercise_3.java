package day3programs;

class Counter{
	static int count=0;
	Counter(){
		count++;
	}
	void display() {
		System.out.println(count);
	}
}
public class exercise_3 {

	public static void main(String[] args) {
		new Counter();
		new Counter();
		new Counter();
		new Counter();
		new Counter();
		Counter obj = new Counter();
		obj.display();
	}

}
