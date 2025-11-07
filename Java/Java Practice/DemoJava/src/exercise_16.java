class stringUtility{
	int stringLength(String word) {
		return word.length();
	}
	int countVowels(String word) {
		int vowelcount=0;
		word=word.toLowerCase();
		for(int i=0;i<word.length();i++) {
			if(word.charAt(i)=='a' || word.charAt(i)=='e' || word.charAt(i)=='i' || word.charAt(i)=='o' || word.charAt(i)=='u') {
				vowelcount++;
			}
		}
		return vowelcount;
	}
}
public class exercise_16 {

	public static void main(String[] args) {
		stringUtility obj = new stringUtility();
		int len = obj.stringLength("apple");
		System.out.println("Length of apple is "+len);
		int vowel = obj.countVowels("java");
		System.out.println("Count of vowel in java is "+vowel);
	}

}
