package day4programs;

import java.util.Scanner;

public class exercise_1 {

	public static void main(String[] args) {
		System.out.println("Enter number of numbers");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] arr = new int[n];
		int next;
		for(int i =0;i<n;i++) {
			System.out.println("Enter next numbet");
			try {
				next=sc.nextInt();
				if(next>0) {
					arr[i]=next;
				}
				else {
					i--;
					throw new negativeException("Array elements cannot be negative");
				}
			}catch(negativeException e) {
				System.out.println(e.getMessage());
			}
		}
		for(int i=0;i<n;i++) {
			System.out.print(arr[i]+" ");
		}
	}

}
