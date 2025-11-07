package day2programs;

public class p11_returnarray {

	public static void main(String[] args) {
		int no[] = new int[5];
		no[0]=10;
		no[1]=11;
		no[2]=12;
		no[3]=100;
		no[4]=101;
		System.out.println("Initial values are");
		for(int i=0;i<no.length;i++) {
			System.out.println(no[i]);
		}
		no=incrementByHundred(no);
		System.out.println("After increment, values are");
		for(int i=0;i<no.length;i++) {
			System.out.println(no[i]);
		}
	}
	static int[] incrementByHundred(int arr[]) {
		for(int i=0;i<arr.length;i++) {
			arr[i]+=100;
		}
		return arr;
	}

}
