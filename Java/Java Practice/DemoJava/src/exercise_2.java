import java.util.Scanner;

public class exercise_2 {
	public static void main(String[] args) {
		int checknum;
		Scanner sc  = new Scanner(System.in);
		System.out.print("Enter the number:");
		checknum = sc.nextInt();
		if(checknum%7==0) {
			System.out.println(checknum+" is divisible by 7");
		}
		else {
			System.out.println(checknum+" is not divisible by 7");
		}
	}
}

//Accept a number from user and checks if it is divisibe by 7