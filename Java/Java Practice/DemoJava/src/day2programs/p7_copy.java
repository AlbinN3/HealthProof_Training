package day2programs;

class simple{
	int a;
	simple(){
		a=10;
	}
	simple(simple s){
		a=s.a;
	}
	void print() {
		System.out.println("Value of a is " +a);
	}
}
public class p7_copy {

	public static void main(String[] args) {
		simple obj1 = new simple();
		obj1.print();
		simple obj2 = new simple(obj1);
		obj2.print();
	}

}
