package day4programs;

import java.util.HashSet;
import java.util.Set;

public class p11_sets {

	public static void main(String[] args) {
		Set<String> myset = new HashSet<>();
		myset.add("Value1");
		System.out.println(myset);
		myset.add("Value2");
		System.out.println(myset);
		myset.add("Value3");
		System.out.println(myset);
		myset.add("Value1");
		System.out.println(myset);
		System.out.println(myset.contains("Value1"));
	}

}
