package day4programs;

import java.util.HashMap;

public class p12_hashmap {

	public static void main(String[] args) {
		HashMap<Integer,String> employee = new HashMap<>();
		employee.put(1,"Albin");
		employee.put(2,"Alan");
		System.out.println(employee);
		employee.remove(1);
		System.out.println(employee);

		
	}

}
