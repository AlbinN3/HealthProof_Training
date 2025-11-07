package day2programs;

public class exercise_12 {

	public static void main(String[] args) {
		int no[] = new int[5];
		no[0]=10;
		no[1]=191;
		no[2]=129;
		no[3]=100;
		no[4]=1;
		int sum=0;
		for(int i=0;i<no.length;i++) {
			sum+=no[i];
		}
		System.out.println(sum);
	}

}
