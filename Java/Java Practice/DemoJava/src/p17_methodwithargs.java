class methodwithargs{
	void m1() {
		System.out.println("M1 is runnung here");
		m2(10);
	}
	void m2(int n) {
		System.out.println("M2 is running here");
		System.out.println(n+10);
	}
}
public class p17_methodwithargs {

	public static void main(String[] args) {
		methodwithargs obj = new methodwithargs();
		obj.m1();
	}

}
