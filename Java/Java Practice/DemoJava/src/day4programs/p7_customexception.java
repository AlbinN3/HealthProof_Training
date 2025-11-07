package day4programs;

public class p7_customexception {

	public static void main(String[] args){
		int age =10;
		try {
			if(age<18) {
				throw new myexception("Age Exception-custom");
			}
			else {
				System.out.println("Age is valid");
			}
		}catch(myexception e) {
			System.out.println(e.getMessage());
		}
	}

}
