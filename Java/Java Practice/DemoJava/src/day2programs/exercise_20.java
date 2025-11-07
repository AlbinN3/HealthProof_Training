package day2programs;

import java.util.Scanner;

public class exercise_20 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the string");
		String str=sc.nextLine();
		String arr[]=str.strip().split("\\s+");
		System.out.println(arr.length);
		sc.close();
	}

}
