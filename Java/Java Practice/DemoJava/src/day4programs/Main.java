package day4programs;

import java.util.HashMap;
import java.util.Scanner;

class Book {
	Book(int bookPrice,String bookAuthor,String bookName){
		this.bookPrice=bookPrice;
		this.bookName=bookName;
		this.bookAuthor=bookAuthor;
	}
	String bookName,bookAuthor;
	Integer bookPrice;
	@Override
	public String toString(){
		return "Book[Name='" + bookName + "', Author='" + bookAuthor + "', Price=" + bookPrice + "]";
	}
}
public class Main{
	public static void main(String[] args) throws InterruptedException {
		Scanner sc = new Scanner(System.in);
		int ch, bookPrice,bookId;
		String bookName,bookAuthor;
		HashMap<Integer,Book> book = new HashMap<>();
		do{
			System.out.println("Enter Choice");
			System.out.println("1.Add Book");
			System.out.println("2.View Book");
			System.out.println("3.Remove Book");
			System.out.println("4.Verify Book Exists or not");
			System.out.println("5.Exit");
			ch=sc.nextInt();
			switch(ch) {
				case 1:	System.out.println("Enter Book Id");
						bookId = sc.nextInt();
						System.out.println("Enter Book Name");
						bookName = sc.next();
						System.out.println("Enter Book Author");
						bookAuthor = sc.next();
						System.out.println("Enter Book price");
						bookPrice = sc.nextInt();
						if(!book.containsKey(bookId)) {
							Book bookObject = new Book(bookPrice,bookAuthor,bookName);
							book.put(bookId,bookObject);
						}else {
							System.out.println("Book already exists");
						}
						break;
				case 2:	for(Integer id:book.keySet()) {
							System.out.println("Id "+id+" ->"+book.get(id));
						}
						break;
				case 3:	System.out.println("Enter book id");
						bookId = sc.nextInt();
						if(book.containsKey(bookId)) {
							book.remove(bookId);
							System.out.println("Book Deleted");
						}
						else {
							System.out.println("ENter a valid book Id");
						}
						break;
				case 4:	System.out.println("Enter a book id to check");
						bookId=sc.nextInt();
						if(book.containsKey(bookId)) {
							System.out.println("Book exists");
							System.out.println("ID "+bookId+" ->"+book.get(bookId));
						}
						else {
							System.out.println("Book does not exists");
						}
						break;
				case 5:	
						break;
			}
		}while(ch!=5);
		System.out.print("Shutting down in...");
		Thread.sleep(2000);
		System.out.print(3+"...");
		Thread.sleep(2000);
		System.out.print(2+"...");
		Thread.sleep(2000);
		System.out.print(1+"...");
	}
} 