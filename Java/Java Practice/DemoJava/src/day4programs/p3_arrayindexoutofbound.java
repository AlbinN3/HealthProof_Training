package day4programs;

public class p3_arrayindexoutofbound {

	public static void main(String[] args) {
		int[] arr = new int[1];
		try {
			System.out.println(arr[1]);
		}catch(ArrayIndexOutOfBoundsException e) {
			System.out.println(e);
		}
		System.out.println("rets of program");
	}

}
