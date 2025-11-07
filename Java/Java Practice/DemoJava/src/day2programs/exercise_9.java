package day2programs;

class Book{
	String title,author;
	int price;
	Book(){
		title=null;
		price=0;
		author=null;
	}
	Book(String title, String author){
		this.title = title;
		this.author = author;
	}
	Book(String title, String author, int price){
		this.title=title;
		this.author=author;
		this.price=price;
	}
	void print() {
		System.out.println("The title is "+title);
		System.out.println("The author is "+author);
		System.out.println("The price is "+price);
	}
}
public class exercise_9 {

	public static void main(String[] args) {
		Book obj3 = new Book();
		obj3.print();
		Book obj1 = new Book("Solo Levelling","Tim Tim");
		obj1.print();
		Book obj2 = new Book("Nano Machine","Tom Tom",1000);
		obj2.print();
	}

}
