package day5programs;

class runParallel extends Thread{
	Thread t;
	String threadname;
	
	runParallel(String tname){
		threadname=tname;
		System.out.println("Thread name "+threadname+" started...");
	}
	public void run() {
		int i;
		for(i=0;i<50;i++) {
			System.out.println("Thread name "+threadname);
			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		System.out.println("Thread "+threadname+" is dead");
	}
	public void start() {
		t = new Thread(this,threadname);
		t.start();
	}
	public void threadInterrupt() {
		t.interrupt();
	}
}
public class p2threadparallel {

	public static void main(String[] args) throws InterruptedException {
		runParallel obj1 = new runParallel("P1");
		runParallel obj2 = new runParallel("P2");
		obj1.start();
		obj2.start();
		Thread.sleep(2000);
		obj1.threadInterrupt();
		Thread.sleep(2000);
		obj2.threadInterrupt();
	}

}
