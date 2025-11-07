package day4programs;

import java.util.ArrayList;
import java.util.List;



public class p8_list {

	public static void main(String[] args) {
		List<String> list = new ArrayList<>();
		list.add("item1");
		list.add("item2");
		list.add("item3");
		list.add("item4");
		System.out.println(list);
		boolean res =list.contains("item3");
		System.out.println(res);
		res =list.contains("item11");
		System.out.println(res);
		list.remove(1);
		System.out.println(list);
		System.out.println(list.size());
	}

}
