package day2programs;

public class p2_testingclass {
	public static void main(String[] args) {
		int a=10,b=20,result;
		calc obj = new calc();
		result = obj.add(a, b);
		System.out.println("Result is "+result);
	}
}
