package Utility;

import java.util.Scanner;


public class validate {
	public boolean validateWithdrawal(int balance,int amount) {
		if(balance-amount>0) {
			return true;
		}
		else {
			return false;
		}
	}
	public boolean validatePin(int realPin) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the pin:");
		int pin=sc.nextInt();
		if(pin!=realPin) {
			return false;
		}
		else {
			return true;
		}
	}
}
