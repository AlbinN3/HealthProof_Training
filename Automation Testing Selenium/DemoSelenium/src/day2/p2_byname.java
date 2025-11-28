package day2;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class p2_byname {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/");
		WebElement searchbox = driver.findElement(By.name("NewsletterEmail"));
		searchbox.sendKeys("Science@gmail.com");
		
		WebElement searchbutton = driver.findElement(By.id("newsletter-subscribe-button"));
		searchbutton.click();
		Thread.sleep(2000);
		driver.quit();
	}

}
