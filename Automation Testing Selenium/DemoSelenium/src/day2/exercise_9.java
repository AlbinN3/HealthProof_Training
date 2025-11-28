package day2;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class exercise_9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://petstore.octoperf.com/");
		WebElement head = driver.findElement(By.xpath("//h2"));
		String verify = head.getText();
		if(verify.equals("Welcome to JPetStore 6")) {
			System.out.println("Success");
		}
		else {
			System.out.println("Not Success");
		}
		driver.quit();
	}

}
