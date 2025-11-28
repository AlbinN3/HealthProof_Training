package pageObjects2;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

public class cartPage {
	WebDriver driver;
	WebElement cart,checkout,fname,lname,zip;
	public cartPage(WebDriver driver) {
		this.driver=driver;
	}
	public void cartsPage() {
		cart = driver.findElement(By.className("shopping_cart_link"));
		cart.click();
	}
	public void clickCheckout() {
		checkout = driver.findElement(By.id("checkout"));
		checkout.click();
	}
	public void enterFirstName(String s) {
		fname = driver.findElement(By.id("first-name"));
		fname.sendKeys(s);
	}
	public void enterLastName(String s) {
		lname = driver.findElement(By.id("last-name"));
		lname.sendKeys(s);
	}
	public void enterZip(String s) {
		zip = driver.findElement(By.id("postal-code"));
		zip.sendKeys(s);
	}
	public void clickContinue() {
		driver.findElement(By.id("continue")).click();
	}
}
