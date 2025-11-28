package pageObjects2;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

public class loginPage {
	WebDriver driver;
	WebElement username,password,login;
	public loginPage(WebDriver driver) {
		this.driver=driver;
	}
	public void enterUserName(String s) {
		username=driver.findElement(By.id("user-name"));
		username.sendKeys(s);
	}
	public void enterPassword(String s) {
		password=driver.findElement(By.id("password"));
		password.sendKeys(s);
	}
	public void clickLogin() {
		login = driver.findElement(By.id("login-button"));
		login.click();
	}
}
