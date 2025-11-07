package day2programs;

import java.util.Scanner;

public class exercise_21 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the string");
		String pass=sc.nextLine();
		sc.close();
		int flag=0;
		if(pass.length()>=8) {
			for(int i=0;i<pass.length();i++) {
				if(Character.isDigit(pass.charAt(i))) {
					flag=1;
				}
			}
			if(flag==1) {
				System.out.println("Password accepted");
			}
			else {
				System.out.println("Password must have atleast one number");
			}
		}
		else {
			System.out.println("Password must be atleast 8 character long");
		}
	}

}
