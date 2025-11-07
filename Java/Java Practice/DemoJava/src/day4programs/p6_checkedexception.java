package day4programs;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;

public class p6_checkedexception {

	public static void main(String[] args) throws FileNotFoundException {
		FileReader file = new FileReader("file1.txt");
		BufferedReader buffer = new BufferedReader(file);
	}

}
