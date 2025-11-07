import java.util.Scanner;

public class exercise_10 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		System.out.println("Enter the number");
		n=sc.nextInt();
		poscheck(n);
	}
	static void poscheck(int n) {
		if(n<0) {
			System.out.println("The number is negative");
		}
		else {
			System.out.println("The number is positive");
		}
	}
}
