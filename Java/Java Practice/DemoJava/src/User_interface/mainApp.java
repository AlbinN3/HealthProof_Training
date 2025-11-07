package User_interface;
import Bank.Transaction;
import Utility.validate;

import java.util.Scanner;

public class mainApp {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter user name");
		String name=sc.next();
		System.out.println("Enter customer id");
		int cid=sc.nextInt();
		System.out.println("Enter pin");
		int pin=sc.nextInt();
		Transaction transactionObject = new Transaction(cid,0,pin,name);
		validate validateObject = new validate();
		pin=0;
		int choice;
		boolean vflag=false,pinflag=false;
		do {
			System.out.println("Enter choice- 1.Deposit 2.Withdraw 3.View Customer 4.Exit");
			choice=sc.nextInt();
			switch(choice) {
				case 1:
					int realPin=transactionObject.getPin();
					pinflag=validateObject.validatePin(realPin);
					if(pinflag) {
						transactionObject.deposit();
					}
					else {
						System.out.println("Wrong pin");
					}
					break;
				case 2:realPin=transactionObject.getPin();
					pinflag=validateObject.validatePin(realPin);
					if(!pinflag) {
						break;
					}
					int realBalance=transactionObject.getBalance();
					int amount;
					System.out.println("Enter amount to be withdrawed");
					amount=sc.nextInt();
					vflag=validateObject.validateWithdrawal(realBalance,amount);
					if(vflag) {
						transactionObject.withdrawal(amount);
					}
					else {
						System.out.println("Insufficient Balance");
					}
					break;
				case 3:transactionObject.viewCustomerDetails();
					break;
				case 4:break;
			}
		}while(choice!=4);
	}

}
