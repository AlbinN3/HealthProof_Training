package pageObjects;

import java.time.Duration;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

public class RegisterUser {
	WebDriver driver;
	WebDriverWait wait;

	public RegisterUser(WebDriver driver) {
		this.driver = driver;
		this.wait = new WebDriverWait(driver, Duration.ofSeconds(30));
	}
	public void clickRegister() {
		driver.findElement(By.id("menuUser")).click();
	}
	public void clickCreateNewAccount() throws InterruptedException {
//		wait.until(ExpectedConditions.invisibilityOfElementLocated(By.cssSelector("svg[width='50'][height='50']")));
//		wait.until(ExpectedConditions.invisibilityOfElementLocated(By.tagName("svg")));
//		wait.until(ExpectedConditions.invisibilityOfElementLocated(By.className("loader")));
//		wait.until(ExpectedConditions.elementToBeClickable(By.linkText("CREATE NEW ACCOUNT"))).click();
		//a[@href="javascript:void(0)" and @class="create-new-account ng-scope"]
		wait.until(ExpectedConditions.invisibilityOfElementLocated(By.className("loader")));
//		Thread.sleep(9000);
		wait.until(ExpectedConditions.elementToBeClickable(By.xpath("//a[@href=\"javascript:void(0)\" and @class=\"create-new-account ng-scope\"]"))).click();
		Thread.sleep(2000);
	}
	public void enterUsername(String username) {
		driver.findElement(By.name("usernameRegisterPage")).sendKeys(username);
	}
	public void enterEmail(String email) {
		driver.findElement(By.name("emailRegisterPage")).sendKeys(email);
	}
	public void enterPassword(String password) {
		driver.findElement(By.name("passwordRegisterPage")).sendKeys(password);
	}
	public void enterConfirmPassword(String confirmPassword) {
		driver.findElement(By.name("confirm_passwordRegisterPage")).sendKeys(confirmPassword);
	}
	public void clickIAgree() {
		driver.findElement(By.xpath("//input[@name=\"i_agree\"]")).click();
	}
	public void clickRegisterButton() {
		driver.findElement(By.id("register_btn")).click();
	}
	public WebElement ifRegistered() {
		return driver.findElement(By.xpath("//span[@class=\"hi-user containMiniTitle ng-binding\"]"));
	}
	public boolean ifEmailWrong() {
		WebElement wrongEmailLabel = driver.findElement(By.xpath("//*[@id='formCover']/div[1]/div[1]/sec-view[2]/div/label"));
		String message = wrongEmailLabel.getText();
		if(message.equals("Your email address isn't formatted correctly")) {
			return true;
		}else {
			return false;
		}
	}
}
