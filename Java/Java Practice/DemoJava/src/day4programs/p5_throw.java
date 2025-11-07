package day4programs;

import java.util.Scanner;

public class p5_throw {
	public static void validate(int age){
		if(age< 18) {
			throw new ArithmeticException("Invalid age");
		}
		else {
			System.out.println("Age is valid");
		}
	}
	public static void main(String[] args) {
		int age;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter age");
		age=sc.nextInt();
		try {
			validate(age);
		}catch(Exception e) {
			System.out.println("Exception handled "+e.getMessage());
		}
	}

}
