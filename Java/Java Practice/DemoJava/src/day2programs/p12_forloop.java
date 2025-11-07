package day2programs;

public class p12_forloop {

	public static void main(String[] args) {
		int no[] = new int[5];
		no[0]=10;
		no[1]=11;
		no[2]=12;
		no[3]=100;
		no[4]=101;
		for(int n: no) {
			System.out.println("Value of no "+n);
		}
	}

}
