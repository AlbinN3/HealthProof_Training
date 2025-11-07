import java.util.Scanner;

public class exercise_6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name,email,dob;
		System.out.println("Enter your name");
		name=sc.next();
		System.out.println("Enter your email");
		email=sc.next();
		System.out.println("Enter your dob");
		dob=sc.next();
		System.out.println("Hi <<"+name+">>, welcome to java training. Your email is <<"+email+">> and your dob is <<"+dob+">>");
	}

}

//Accept name, email and dob and print it