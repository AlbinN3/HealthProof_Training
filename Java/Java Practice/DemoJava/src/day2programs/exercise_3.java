package day2programs;

class overload{
	boolean compare(int a, int b) {
		if(a==b) {
			return true;
		}
		else {
			return false;
		}
	}
	boolean compare(String a,String b) {
		if(a.equals(b)) {
			return true;
		}
		else {
			return false;
		}
	}
}
public class exercise_3 {

	public static void main(String[] args) {
		overload obj = new overload();
		System.out.println(obj.compare(5,5));
		System.out.println(obj.compare("a","b"));
	}

}
