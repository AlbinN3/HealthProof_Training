package day2programs;

public class p17_stringBuilder {
	public static void main(String[] args) {
		StringBuilder sb = new StringBuilder("java");
		System.out.println("Inital value");
		System.out.println(sb);
		sb.append("is easy");
		sb.reverse();
	}
}
