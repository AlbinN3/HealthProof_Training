package day3programs;

class employee{
	int empid;
	String empname,city;
	employee(int e, String ename, String empcity){
		empid=e;
		empname=ename;
		city=empcity;
	}
	void display() {
		System.out.println("Employee id is "+empid);
		System.out.println("Employee name is "+empname);
		System.out.println("Employee city is "+city);
	}
}
class salary extends employee{
	salary(int e, String ename, String empcity) {
		super(e, ename, empcity);
	}
	double basic,da,hra,pf,gross,netpay;
	void calculateSalary(int basic) {
		this.basic=basic;
		da=basic*0.3;
		hra=basic*0.2;
		pf=basic*0.8;
		gross=da+hra+pf+basic;
		netpay=gross-pf;
	}
	void display() {
		super.display();
		System.out.println("Gross pay is "+gross);
		System.out.println("Net pay is "+netpay);
	}
}

public class exercise_4 {

	public static void main(String[] args) {
		salary obj = new salary(5, "abc", "deeee");
		obj.calculateSalary(1000);
		obj.display();
	}

}
