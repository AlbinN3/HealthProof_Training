class testing{
	void m1() {
		System.out.println("M1 is running");
		m2();
	}
	void m2() {
		System.out.println("M2 is running");
		m3();

	}
	void m3() {
		System.out.println("M3 is running");
	}
}
public class exercise_17 {

	public static void main(String[] args) {
		testing obj = new testing();
		obj.m1();
	}

}
