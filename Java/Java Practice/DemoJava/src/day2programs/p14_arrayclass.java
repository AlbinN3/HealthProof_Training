package day2programs;

import java.util.Arrays;

public class p14_arrayclass {

	public static void main(String[] args) {
		int no[] = new int[5];
		no[0]=10;
		no[1]=191;
		no[2]=129;
		no[3]=100;
		no[4]=1;
		System.out.println("Array before sorting ");
		for(int i=0;i<no.length;i++) {
			System.out.println(no[i]+" ");
		}
		Arrays.sort(no);
		System.out.println("Array after sorting "+no);
		for(int i=0;i<no.length;i++) {
			System.out.println(no[i]+" ");
		}
	}

}
