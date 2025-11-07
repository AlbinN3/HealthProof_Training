package day2programs;

public class p10_arrayarg {

	public static void main(String[] args) {
		int no[] = new int[5];
		no[0]=1;no[1]=2;no[2]=3;no[3]=6;no[4]=6;
		int greatest = findGreatest(no);
		System.out.println("Greatest is "+greatest);
	}
	static int findGreatest(int arr[]) {
		int greatest=arr[0];
		for(int i=0;i<arr.length;i++) {
			if(arr[i]>greatest) {
				greatest=arr[i];
			}
		}
		return greatest;
	}
}
