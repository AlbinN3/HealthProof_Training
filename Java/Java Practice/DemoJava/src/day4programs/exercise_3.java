package day4programs;

import java.util.Scanner;

public class exercise_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter password");
		String password = sc.next();
		try {
			if(password.length()<8) {
				throw new lengthException("Password must have atleast 8 character");
			}
			else {
				System.out.println("password ok");
			}
		}catch(lengthException e) {
			System.out.println(e.getMessage());
		}
	}

}
