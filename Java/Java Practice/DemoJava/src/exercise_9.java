import java.util.Scanner;

public class exercise_9 {

	public static void main(String[] args) {
		int n;
		System.out.println("Enter the number ");
		Scanner sc = new Scanner(System.in);
		n=sc.nextInt();
		for(int i=1;i<=10;i++) {
			System.out.println(i+"*"+n+"="+i*n);
		}
	}

}
