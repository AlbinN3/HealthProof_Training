package day2programs;

public class p16_stringbuffer {

	public static void main(String[] args) {
		StringBuffer sb = new StringBuffer("hi");
		System.out.println("Initial value");
		System.out.println(sb);
		sb.append(" Hello");
		System.out.println(sb);
		sb.insert(3, "Hello");
		System.out.println(sb);
		sb.replace(0, 2, "Tim");
		System.out.println(sb);
	}

}
