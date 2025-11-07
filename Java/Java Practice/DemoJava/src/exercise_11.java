import java.util.Scanner;

public class exercise_11 {

	public static void main(String[] args) {
		String vowel = "aeiou";
		String check;
		int vowelcount=0;
		System.out.println("Enter the string");
		Scanner sc = new Scanner(System.in);
		check=sc.next();
		check=check.toLowerCase();
		for(int i=0;i<check.length();i++) {
			for(int j=0;j<vowel.length();j++) {
				if(check.charAt(i)==vowel.charAt(j)) {
					vowelcount++;
				}
			}
		}
		System.out.println("Number of vowels is "+vowelcount);
	}

}
