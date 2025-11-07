package day2programs;

public class p8_array {

	public static void main(String[] args) {	
		int nos[] = new int[5];
		nos[0] = 0;
		nos[1] = 1;
		nos[2] = 2;
		nos[3] = 3;
		nos[4] = 4;
		System.out.println("0th element is "+nos[0]);
		System.out.println("length is "+nos.length);
		for(int i=0;i<nos.length;i++) {
			System.out.println(i+"th position has element "+nos[i]);
		}
	}

}
