package day2programs;

import java.util.Scanner;

public class exercise_18 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String name;
		int flag=0;
		do {
			flag=0;
			System.out.println("Enter your name");
			name=sc.next();
			for(int i=0;i<name.length();i++) {
				if(Character.isDigit(name.charAt(i))) {
					flag=1;
					break;
				}
			}
		}while(flag==1);
		System.out.println("Name is in correct format");
		sc.close();
	}

}
