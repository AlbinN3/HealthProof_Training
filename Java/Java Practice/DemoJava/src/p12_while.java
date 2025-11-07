import java.util.Scanner;

public class p12_while {

	public static void main(String[] args) {
		int i=1,n,sum=0;
		float avg;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter 5 numbers");
		while(i<=5) {
			n=sc.nextInt();
			sum+=n;
			i++;
		}
		avg=(float)sum/5;
		System.out.println("The sum of 5 numbers is "+sum);
		System.out.println("The average of 5 numbers is "+avg);
	}

}
