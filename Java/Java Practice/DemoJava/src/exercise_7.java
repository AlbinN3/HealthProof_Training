import java.util.Scanner;

public class exercise_7 {

	public static void main(String[] args) {
		int n,sum=0,read,i=0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter N");
		n=sc.nextInt();
		do {
			System.out.println("Enter the number");
			read=sc.nextInt();
			if(read!=-999) {
				sum+=read;
				i++;
			}
		}while(i<n && read!=-999);
	System.out.println("Sum is "+sum);
	System.out.println("Average is "+(float)(sum/i));
}
}