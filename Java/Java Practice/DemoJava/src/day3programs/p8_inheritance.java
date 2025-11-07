package day3programs;
class program1{
	program1(){
		System.out.println("Program 1");
	}
}
class program2 extends program1{
	program2(){
		System.out.println("Program 2");
	}
}
class program3 extends program2{
	program3(){
		System.out.println("Program 3");
	}
}
public class p8_inheritance {

	public static void main(String[] args) {
		new program3();
	}
}
/*
 * extending a class and creating an object for the subclass will automatically call for the
 * constructor of superclass
 */
