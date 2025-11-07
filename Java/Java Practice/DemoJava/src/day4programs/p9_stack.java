package day4programs;

import java.util.Stack;

public class p9_stack {

	public static void main(String[] args) {
		Stack<String> mystack = new Stack<>();
		System.out.println("Adding item1");
		mystack.push("item1");
		System.out.println(mystack);
		System.out.println("Adding item2");
		mystack.push("item2");
		System.out.println(mystack);
		System.out.println("Adding item3");
		mystack.push("item3");
		System.out.println(mystack);
		System.out.println("Adding item4");
		mystack.push("item4");
		System.out.println(mystack);
		System.out.println("Removing item4");
		mystack.pop();
		System.out.println(mystack);
		System.out.println("Stack size="+mystack.size());
		System.out.println(mystack.peek());
	}

}
