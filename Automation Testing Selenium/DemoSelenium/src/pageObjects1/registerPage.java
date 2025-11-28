package pageObjects1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

public class registerPage {
	WebDriver driver;
	WebElement firstname,lastname,email,password;
	public registerPage(WebDriver driver) {
		this.driver=driver;
	}
	public void enterFirstname(String s) {
		firstname = driver.findElement(By.id("input-firstname"));
		firstname.sendKeys(s);
	}
	public void enterLastName(String s) {
		lastname = driver.findElement(By.id("input-lastname"));
		lastname.sendKeys(s);
	}
	public void enterEmail(String s) {
		email = driver.findElement(By.id("input-email"));
		email.sendKeys(s);
	}
	public void enterPassword(String s) {
		password = driver.findElement(By.id("input-password"));
		password.sendKeys(s);
	}
}
