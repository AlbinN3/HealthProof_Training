package day3programs;

class a{
	int a=19;
}
class b extends a{
	int b=89;
	void add() {
		System.out.println(a+b);
	}
}
class c extends a{
	int b=99;
	void add() {
		System.out.println(a+b);
	}
}
public class p3_hierarchical_inheritance {

	public static void main(String[] args) {
		b obj = new b();
		obj.add();
		c obj1 = new c();
		obj1.add();
	}

}
