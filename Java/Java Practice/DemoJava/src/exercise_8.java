import java.util.Scanner;

public class exercise_8 {

	public static void main(String[] args) {
		int i;
		Scanner sc = new Scanner(System.in);
		int[] a = new int[5];
		for(i=0;i<5;i++) {
			System.out.println("enter the number");
			a[i]=sc.nextInt();
		}
		int great=a[0],small=a[0];
		for(i=1;i<5;i++) {
			if(a[i]>great) {
				great=a[i];
			}
			if(a[i]<small) {
				small=a[i];
			}
		}
		System.out.println("Greatest is "+great);
		System.out.println("Smallest id "+small);
	}

}
