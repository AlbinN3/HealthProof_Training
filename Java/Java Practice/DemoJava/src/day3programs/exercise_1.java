package day3programs;

class bankAccount{
	int balance;
	void deposit(int am) {
		System.out.println("Amount deposited");
		balance+=am;
	}
	void withdraw(int am) {
		System.out.println("Amount withdrawn");
		balance-=am;
	}
}
class savingAccount extends bankAccount{
	void withdraw(int am) {
		if(super.balance<100) {
			System.out.println("Insufficient Balance");
		}
		else {
			super.withdraw(am);
		}
	}
}
public class exercise_1 {

	public static void main(String[] args) {
		savingAccount obj1 = new savingAccount();
		obj1.deposit(1000);
		obj1.withdraw(910);
		obj1.withdraw(120);
	}

}
