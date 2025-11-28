package day2;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

public class p14_readCSV {

	public static void main(String[] args) throws IOException, InterruptedException {
		// TODO Auto-generated method stub
		String datafile ="C:\\Java Practice\\testdata.csv";
		BufferedReader br = null;
		String line = "";
		String csvSplitBy = ",";
		br = new BufferedReader(new FileReader(datafile));
		while((line = br.readLine())!=null)
		{
			WebDriver driver = new EdgeDriver();
			String[] data = line.split(csvSplitBy);
			driver.get("https://demowebshop.tricentis.com/");
			driver.findElement(By.linkText("Register")).click();
			driver.findElement(By.id("FirstName")).sendKeys(data[0]);
			driver.findElement(By.id("LastName")).sendKeys(data[1]);
			driver.findElement(By.id("Email")).sendKeys(data[2]);
			Thread.sleep(5000);
			System.out.println(data[0]+data[1]);
			driver.quit();
		}
		br.close();
	}
}
