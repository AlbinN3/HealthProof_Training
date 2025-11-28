package pageFactory;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.FindBy;
import org.openqa.selenium.support.PageFactory;

public class loginPage {
	WebDriver driver;
	public loginPage(WebDriver driver) {
		this.driver = driver;
		PageFactory.initElements(driver,this);
	}
	
	@FindBy(id="Email")
	WebElement username;
	
	@FindBy(id = "Password")
	WebElement password;
	
	public void enterEmail(String s) {
		username.sendKeys(s);;
	}
	public void enterPassword(String s) {
		password.sendKeys(s);
	}
}
