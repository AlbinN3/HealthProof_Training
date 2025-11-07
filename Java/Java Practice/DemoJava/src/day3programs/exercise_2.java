package day3programs;

class Shape{
	double getPerimeter(int l,int b) {
		double perimeter = 2*(l+b);
		return perimeter;
	}
	double getArea(int l, int b) {
		return l*b;
	}
}
class Circle extends Shape{
	double getPerimeter(int r) {
		double area = r*3.14*2;
		return area;
	}
	double getArea(int r) {
		return r*r*3.14;
	}
	
}
public class exercise_2 {

	public static void main(String[] args) {
		Circle obj = new Circle();
		System.out.println(obj.getArea(10));
		System.out.println(	obj.getPerimeter(11));
	}

}
