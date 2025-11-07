import java.util.Scanner;

public class exercise_12 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter old meter reading");
		int oldmeter=sc.nextInt();
		System.out.println("Enter new meter reading");
		int newmeter=sc.nextInt();
		int units = newmeter-oldmeter;
		System.out.println(units);
		int charge=0;
		if(units>100 && units<=200){
			charge+=(units-100)*1;
		}else if(units>200 && units<=300) {
			charge+=100*1+(units-200)*2;
		}else if(units>300 && units<=400) {
			charge+=100*1+100*2+(units-300)*3;
		}else if(units>400){
			charge+=100*1+100*2+100*3+(units-400)*4;
		}else {
			
		}
		System.out.println("Total charge is "+charge);
	}

}
