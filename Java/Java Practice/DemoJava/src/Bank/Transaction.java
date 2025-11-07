package Bank;

import java.util.Scanner;

class Customer{
	private int customerId;
	protected int balance;
	private int pin;
	String name;
	Customer(int cid,int bal,int pin,String name){
		customerId=cid;
		balance=bal;
		this.pin=pin;
		this.name=name;
	}
	public int getPin() {
		return pin;
	}
}
public class Transaction extends Customer{
	public Transaction(int cid,int bal,int pin,String name){
		super(cid,bal,pin,name);
	}
	Scanner sc = new Scanner(System.in);
	int amount;
	public void deposit() {
		System.out.println("Enter amount to be deposited");
		amount=sc.nextInt();
		balance+=amount;
		System.out.println("Amount deposited");
	}
	public void withdrawal(int amount){
		balance-=amount;
	}
	public void viewCustomerDetails() {
		System.out.println("Customer name "+name);
		System.out.println("Customer balance "+balance);
	}
	public int getBalance() {
		return balance;
	}
}

