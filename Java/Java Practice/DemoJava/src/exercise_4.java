import java.util.Scanner;

public class exercise_4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the basic salary:");
		int basicsal = sc.nextInt();
		float dearness,houseRent,cityComp,pf;
		dearness=(float)(basicsal*0.3);
		houseRent=(float)(basicsal*0.18);
		cityComp=(float)(basicsal*0.2);
		pf=(float)(basicsal*0.08);
		System.out.println("Dearness Allowance:"+dearness);
		System.out.println("House rent Allowance:"+houseRent);
		System.out.println("City compensation Allowance:"+cityComp);
		System.out.println("Provident Fund:"+pf);
		float grossPay= basicsal+dearness+houseRent+cityComp+pf;
		System.out.println("Gross pay is:"+grossPay);
		float netPay=grossPay-pf;
		System.out.println("Net pay is:"+netPay);
	}

}

//Accept basic salary and calculate net salary as below
//Dearness allowance is 30%
//House rent allowance is 18%
//City Compensation allowance is 20%
//Provident Fund is 8%
//Gross pay is Basic+Dearness+Hosue Rent+City Compensation+Pf
//Net pay is Gross pay-Provident fund