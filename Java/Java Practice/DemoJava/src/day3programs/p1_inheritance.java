package day3programs;

class one{
	int a =100;
}
class two extends one{
	int b=10;
	void add() {
		System.out.println(a+b);
	}
}

public class p1_inheritance {

	public static void main(String[] args) {
		two obj = new two();
		obj.add();
	}

}
