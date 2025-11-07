import java.util.Scanner;

public class p7_scanner {

	public static void main(String[] args) {
		int age;
		String name;
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter your name:");
		name = sc.next();
		System.out.print("Enter your age:");
		age = sc.nextInt();
		System.out.println("Your name is "+name);
		System.out.println("Your age is "+age);
	}

}
