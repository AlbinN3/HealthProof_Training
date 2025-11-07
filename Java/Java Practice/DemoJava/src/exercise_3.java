import java.util.Scanner;

public class exercise_3 {

	public static void main(String[] args) {
		int a,b,c,d,e;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter each number:");
		a=sc.nextInt();
		b=sc.nextInt();
		c=sc.nextInt();
		d=sc.nextInt();
		e=sc.nextInt();
		System.out.println("Sum is "+(a+b+c+d+e));
		System.out.println("Average is "+(float)((a+b+c+d+e)/5));
	}

}

//Accept 5 numbers from user and display sum and average