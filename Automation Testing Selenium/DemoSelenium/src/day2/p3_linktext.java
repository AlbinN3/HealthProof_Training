package day2;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class p3_linktext {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://google.com");
		WebElement about = driver.findElement(By.linkText("About"));
		about.click();
		Thread.sleep(2000);
		driver.quit();
	}

}
