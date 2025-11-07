package day2programs;

public class p13_varargs {

	public static void main(String[] args) {
		addNumbers(1,1);
		addNumbers(1,2,3);
		addNumbers(1,3,4,6,8);
	}
	static void addNumbers(int a,int ...b) {
		int total = b.length,sum=a;
		for(int i=0;i<total;i++) {
			sum+=b[i];
		}
		System.out.println("Sum is "+sum);
	}

}
