package day2programs;

class utility{
	void add(String a, String b) {
		System.out.println(a+b);
	}
	void add(int a, int b) {
		System.out.println(a+b);
	}
}
public class p3_methodoverloading {

	public static void main(String[] args) {
		utility obj = new utility();
		obj.add("Abc","def");
		obj.add(10, 11);
	}

}
