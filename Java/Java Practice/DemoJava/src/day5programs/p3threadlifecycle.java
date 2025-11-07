package day5programs;

class testinglifecycle extends Thread{
	Thread t;
	String threadName;
	testinglifecycle(String tname){
		threadName=tname;
		System.out.println("Thread "+threadName+" status: New");
	}
	public void run() {
		int i;
		for(i=0;i<30;i++) {
			System.out.println("Thread "+threadName+" is running");
			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		System.out.println("Thread "+threadName+" is dead");
	}
	public void start() {
		t = new Thread(this,threadName);
		t.start();
	}
}

public class p3threadlifecycle {

	public static void main(String[] args) {
		testinglifecycle obj1 = new testinglifecycle("Thread 1");
		testinglifecycle obj2 = new testinglifecycle("Thread 2");
		obj2.start();
		obj1.start();
	}

}
