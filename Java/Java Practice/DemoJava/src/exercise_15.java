class calc{
	void add(int a, int b){
		System.out.println(a+b);
	}
	void multiply(int a, int b) {
		System.out.println(a*b);
	}
}
public class exercise_15 {

	public static void main(String[] args) {
		calc obj = new calc();
		obj.add(5, 5);
		obj.multiply(5,5);
	}

}
