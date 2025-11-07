package pack1;

class sample{
	int x=10;
	private int y =100;
	void display() {
		System.out.println(y);
	}
}
public class demoprivate {

	public static void main(String[] args) {
		sample obj = new sample();
		System.out.println(obj.x);
		obj.display();
	}

}
