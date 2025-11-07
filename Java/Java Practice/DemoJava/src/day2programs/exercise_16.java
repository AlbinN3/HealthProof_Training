package day2programs;

public class exercise_16 {

	public static void main(String[] args) {
		int no[] = new int[5];
		no[0]=10;
		no[1]=191;
		no[2]=129;
		no[3]=100;
		no[4]=1;
		int no1[] = new int[5];
		System.out.println("First array is");
		for(int i=0;i<no.length;i++) {
			System.out.println(no[i]);
		}
		for(int i=0;i<no.length;i++) {
			no1[i]=no[i];
		}
		System.out.println("Second array is");
		for(int i=0;i<no.length;i++) {
			System.out.println(no1[i]);
		}
	}

}
