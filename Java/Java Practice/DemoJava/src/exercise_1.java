import java.util.Scanner;

public class exercise_1 {
	public static void main(String[] args) {
		final double pi = 3.14;
		System.out.print("Enter the radius:");
		Scanner sc = new Scanner(System.in);
		int radius = sc.nextInt();
		float area = (float) pi * radius *radius;
		System.out.println("Area is "+area);
		sc.close();
	}
}


//Accepts radius from user and display the area