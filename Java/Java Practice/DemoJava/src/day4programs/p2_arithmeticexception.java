package day4programs;

public class p2_arithmeticexception {

	public static void main(String[] args) {
		int a=10,b=5,c=5;
		try {
			a=a/(b-c);
		}catch(ArithmeticException e) {
			System.out.println(e);
		}
		System.out.println("Rest of the program");
	}

}
