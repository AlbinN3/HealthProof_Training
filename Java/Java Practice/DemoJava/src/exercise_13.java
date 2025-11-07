import java.util.Scanner;

public class exercise_13 {
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int i=0,n,num,even=0,odd=0;
		System.out.println("Enter N");
		n=sc.nextInt();
		do {
			System.out.println("Enter the number");
			num=sc.nextInt();
			if(num!=-999) {
				if(num%2==0) {
					even++;
				}
				else {
					odd++;
				}
			}
			i++;
		}while(i<n && num!=-999);
		System.out.println("Number of even "+even);
		System.out.println("Number of odd "+odd);
	}
}
