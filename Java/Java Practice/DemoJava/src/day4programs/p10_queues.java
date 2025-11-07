package day4programs;

import java.util.PriorityQueue;

public class p10_queues {

	public static void main(String[] args) {
		PriorityQueue<String> myqueue = new PriorityQueue<>();
		System.out.println("Initial list");
		System.out.println(myqueue);
		myqueue.add("apple");
		System.out.println(myqueue);
		myqueue.add("banana");
		System.out.println(myqueue);
		myqueue.add("apple");
		System.out.println(myqueue);
		myqueue.add("python");
		System.out.println(myqueue);
		System.out.println(myqueue.size());
		myqueue.remove();
		System.out.println(myqueue);
		myqueue.clear();
		System.out.println(myqueue);
	}

}
