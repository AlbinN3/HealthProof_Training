package day2;

import java.util.Random;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class p7_bycss {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/register");
		WebElement email = driver.findElement(By.cssSelector("input#Email"));
		Random random = new Random();
		int randomNumber = random.nextInt(1000);
		String username = "tester";
		email.click();
		email.sendKeys(username+randomNumber+username);
		Thread.sleep(5000);
		driver.quit();
	}

}
