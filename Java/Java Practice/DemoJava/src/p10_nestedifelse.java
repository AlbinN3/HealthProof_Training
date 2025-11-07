
public class p10_nestedifelse {
	public static void main(String[] args) {
		int mark =70;
		if(mark>=90) {
			System.out.println("Grade is A");
		}
		else if(mark>=80 && mark<90) {
			System.out.println("Grade is B");
		}
		else if(mark>=70 && mark<80) {
			System.out.println("Grade is C");
		}
		else {
			System.out.println("You are a failure");
		}
	}
}
