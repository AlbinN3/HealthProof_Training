package day3programs;
class staticdemo{
	int x=10;
	static int y =101;
	staticdemo(){
		x++;
		y++;
		System.out.println("x= "+x);
		System.out.println("x= "+y);
	}
}

public class p7_static {

	public static void main(String[] args) {
		new staticdemo();
		new staticdemo();
		new staticdemo();
	}
}
/*
 static - value will be retained throughout every class, it's like a synchronized variable among
 objects, obj1's update on static variable will be visible in obj2
 */
