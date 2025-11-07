package day2programs;

import java.util.Scanner;

public class p9_dynamicarray {
	public static void main(String[] args) {	
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter size");
		int size= sc.nextInt();
		int nos[] = new int[size];
		for(int i=0;i<size;i++) {
			System.out.println("Enter the element");
			nos[i]=sc.nextInt();
		}
		System.out.println("length is "+nos.length);
		for(int i=0;i<nos.length;i++) {
			System.out.println(i+"th position has element "+nos[i]);
		}
		sc.close();
	}
}
