package project;

import java.util.HashMap;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Blood bloodObject = new Blood();
		Integer ch,dpch,bloodQuantity;
		String exit,bloodGroup;
		do {
			System.out.println("1.Doctor/2.Patient");
			dpch=sc.nextInt();
			if(dpch==1) {
				System.out.println("Enter Choice:");
				System.out.println("1.Add blood:");
				System.out.println("2.Remove blood:");
				System.out.println("3.Display All:");
				System.out.println("4.Availability:");
				ch=sc.nextInt();
				switch(ch) {
						case 1:	//addBlood(bloodObject.blood);
								break;
						case 2:	System.out.println("Enter the blood group");
								bloodGroup= sc.next();
								System.out.println("Enter the blood quantity");
								bloodQuantity = sc.nextInt();
								//removeBlood(bloodGroup,bloodQuantity)
								break;
						case 3:	//displayAll();
								break;
						case 4:	System.out.println("Which blood group do you want to check?(Blood group/All");
								String bloodAvailable;
								bloodAvailable=sc.next();
								if(bloodAvailable.equals("ALL")) {
									//availability(bloodyObject.blood);
								}
								else {
									//availability(bloodObject.blood,bloodAvailable);
								}
								break;
						case 5:
								break;
				}
			}
			else {
					System.out.println("Enter Choice:");
					System.out.println("1.Display all:");
					System.out.println("2.Availability:");
					System.out.println("3.Request:");
					ch=sc.nextInt();
					switch(ch) {
							case 1:
									break;
							case 2:
									break;
							case 3:
									break;
							case 4:
									break;
				}
			}
			System.out.println("Do you want to Continue?(Y/N)");
			exit=sc.next();
		}while(exit.equals("Y"));
	}
}

//https://hastebin.com/share/somodipeti.csharp
//https://hastebin.com/share/enopisowuw.java
