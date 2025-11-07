package day5programs;

class threaddemo extends Thread{
	public void run() {
		System.out.println("Thread is running");
	}
}

public class p1threadbasics {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		threaddemo obj = new threaddemo();
		obj.start();
	}

}