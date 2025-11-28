package day2;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class p6_byclass {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/login");
		WebElement email = driver.findElement(By.className("email"));
		email.click();
		email.sendKeys("Haha");
		Thread.sleep(5000);
		driver.quit();
	}

}
