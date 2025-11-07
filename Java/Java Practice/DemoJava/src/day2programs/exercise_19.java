package day2programs;

import java.util.Scanner;

public class exercise_19 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the string");
		String sent=sc.nextLine();
		String orderno="";
		for(int i=0;i<sent.length();i++) {
			if(Character.isDigit(sent.charAt(i))) {
				orderno+=sent.charAt(i);
			}
		}
		System.out.println(orderno);
		sc.close();
	}

}
