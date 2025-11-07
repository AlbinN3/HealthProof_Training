package day2programs;

import java.util.Arrays;
import java.util.Scanner;

public class exercise_17 {

	public static void main(String[] args) {
		int no[] = new int[5];
		no[0]=10;
		no[1]=191;
		no[2]=129;
		no[3]=100;
		no[4]=1;
		System.out.println("Enter element to search");
		Arrays.sort(no);
		Scanner sc = new Scanner(System.in);
		int element=sc.nextInt();
		int left=0,right=no.length-1,mid,flag=0;
		while(left<right) {
			mid=(left+right)/2;
			if(no[mid]==element) {
				System.out.println("Element found at index "+mid);
				flag=1;
				break;
			}
			else if(no[mid]>element) {
				right=mid;
			}
			else {
				left=mid+1;
			}
		}
		if(flag==0) {
			System.out.println("Element not found");
		}
		sc.close();
	}

}
