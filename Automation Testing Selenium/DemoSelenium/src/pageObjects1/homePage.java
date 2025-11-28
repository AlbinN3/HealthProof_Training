package pageObjects1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

public class homePage {
	WebDriver driver;
	WebElement myAccount,register,login;
	public homePage(WebDriver driver) {
		this.driver=driver;
	}
	public void clickMyAccount() {
		myAccount = driver.findElement(By.xpath("//*[@id=\"top\"]/div/div[2]/ul/li[2]/div/a/span"));
		myAccount.click();
		
	}
	public void clickRegister() {
		register=driver.findElement(By.linkText("Register"));
		register.click();
	}
	public void clickLogin() {
		login = driver.findElement(By.linkText("Login"));
		login.click();
	}
}
