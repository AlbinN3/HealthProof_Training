package day2;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class exercise_8 {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://petstore.octoperf.com/");
		WebElement enter = driver.findElement(By.xpath("//a[@href]"));
		enter.click();
		Thread.sleep(2000);
		driver.quit();
	}

}
