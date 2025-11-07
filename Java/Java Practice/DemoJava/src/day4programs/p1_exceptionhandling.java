package day4programs;

import java.util.Scanner;

public class p1_exceptionhandling {

	public static void main(String[] args) {
		int a,b,c;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 3 numbers ");
		try {
			a=sc.nextInt();
			b=sc.nextInt();
			c=sc.nextInt();
			a=a/(b-c);
			System.out.println("a/(b-c) is " +a);
		}catch(Exception e) {
			e.printStackTrace();
			System.out.println(e);
		}
		System.out.println("Program ended");
	}

}
