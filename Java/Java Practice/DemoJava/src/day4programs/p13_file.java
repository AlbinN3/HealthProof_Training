package day4programs;

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class p13_file {

	public static void main(String[] args) throws IOException {
		File myfile = new File("C:\\Java Practice\\DemoJava\\src\\day4programs\\txtfile.txt");
		boolean res = myfile.createNewFile();
		if(res) {
			System.out.println("File does not exist, new file got created");
		}
		else {
			System.out.println("File already exists");
		}
		FileWriter writer = new FileWriter("C:\\\\Java Practice\\\\DemoJava\\\\src\\\\day4programs\\\\txtfile.txt");
		writer.write("first Hello\n");
		writer.write("second Hello\n");
		writer.write("third Hello\n");
		writer.close();
		FileReader reader = new FileReader("C:\\\\\\\\Java Practice\\\\\\\\DemoJava\\\\\\\\src\\\\\\\\day4programs\\\\\\\\txtfile.txt");
		Scanner sc = new Scanner(reader);
		while(sc.hasNext()) {
			String content = sc.nextLine();
			System.out.println(content);
		}
		sc.close();
		if(myfile.delete()) {
			System.out.println("File deleted");
		}else {
			System.out.println("File not deleted");
		}
	}

}
