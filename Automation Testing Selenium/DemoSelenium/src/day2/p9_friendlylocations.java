package day2;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import static org.openqa.selenium.support.locators.RelativeLocator.with;

public class p9_friendlylocations {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/");
		driver.findElement(By.linkText("Log in")).click();
		WebElement lblEmail = driver.findElement(By.xpath("//label[@for='Email']"));
		WebElement txtUsername = driver.findElement(with(By.tagName("input")).toRightOf(lblEmail));
		txtUsername.sendKeys("abc");
		Thread.sleep(2000);
		WebElement txtPassword = driver.findElement(with(By.tagName("input")).below(txtUsername));
		txtPassword.sendKeys("bbb");
		Thread.sleep(2000);
		driver.quit();
	}

}
