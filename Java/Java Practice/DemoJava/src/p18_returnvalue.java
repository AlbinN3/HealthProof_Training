class methodreturn{
	void m1() {
		System.out.println("M1 is runnung here");
		int a = m2(10);
		System.out.println(a);
	}
	int m2(int n) {
		System.out.println("M2 is running here");
		return (n*n);
	}
}
public class p18_returnvalue {

	public static void main(String[] args) {
		methodreturn obj = new methodreturn();
		obj.m1();
	}

}
