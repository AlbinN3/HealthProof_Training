package day4programs;

import java.util.ArrayList;
import java.util.HashMap;

public class p12_hashmap2 {

	public static void main(String[] args) {
		HashMap<Integer,String> employee = new HashMap<>();
		employee.put(1,"Albin");
		employee.put(2,"Alan");
		System.out.println(employee);
		employee.remove(1);
		System.out.println(employee);
		HashMap<Integer,ArrayList> emp = new HashMap<>();
		ArrayList<String> arr= new ArrayList<>();
		
		
		arr.add("Author1");
		emp.put(1, arr);
		
	}

}
