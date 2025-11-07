package day4programs;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class exercise_2 {

	public static void main(String[] args) {
		try {
			FileReader file = new FileReader("C:\\Java Practice\\DemoJava\\src\\day4programs\\txtfile.txt");
			BufferedReader br = new BufferedReader(file);
			String line;
			while((line=br.readLine())!=null) {
				System.out.println(line);
			}
		}catch(FileNotFoundException e) {
			System.out.println(e.getMessage());
		}catch(IOException e) {
			System.out.println(e.getMessage());
		}
	}

}
