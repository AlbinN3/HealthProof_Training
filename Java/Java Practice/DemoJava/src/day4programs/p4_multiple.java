package day4programs;

public class p4_multiple {

	public static void main(String[] args) {
		int n[] = new int[1];
		try {
			int a=5,b=5,c=5;
			System.out.println(n[2]);
			a=a/(b-c);
			
		}catch(ArithmeticException e) {
			System.out.println(e);
		}catch(ArrayIndexOutOfBoundsException e) {
			System.out.println(e);
		}
		finally {
			System.out.println("Finally");
		}
		System.out.println("Rest");
	}

}
