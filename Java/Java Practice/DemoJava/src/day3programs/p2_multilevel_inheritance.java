package day3programs;
class c1{
	int a =10;
}
class c2 extends c1{
	int b=11;
}
class c3 extends c2{
	int c=12;
	void add() {
		System.out.println(a+b+c);
	}
}
public class p2_multilevel_inheritance {

	public static void main(String[] args) {
		c3 obj = new c3();
		obj.add();
	}

}
