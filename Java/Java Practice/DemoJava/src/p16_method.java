class methoddemo{
	void m1(){
		System.out.println("M1 runs here");
		m2();
	}
	void m2() {
		System.out.println("M2 runs here");
	}
}
public class p16_method {

	public static void main(String[] args) {
		methoddemo obj = new methoddemo();
		obj.m1();
		//obj.m2();
	}

}
