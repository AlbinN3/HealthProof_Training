import java.util.Scanner;

public class exercise_14 {

	public static void main(String[] args) {
		String word;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the word");
		word=sc.next();
		int flag=0;
		for(int i=0,j=word.length()-1;i<word.length();i++,j--) {
			if(word.charAt(i)!=word.charAt(j)) {
				System.out.println("Word is not a palindrome");
				flag=1;
				break;
			}
		}
		if(flag==0) {
			System.out.println("Word is a palindrome");
		}
	}

}
