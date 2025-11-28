package day1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class exercise_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://advantageonlineshopping.com/");
		WebElement speaker = driver.findElement(By.id("speakersTxt"));
		speaker.click();
		//WebElement 
	}

}
