package pageObjects;

import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

public class Cart {
	WebDriver driver;
	public Cart(WebDriver driver) {
		this.driver = driver;
	}
	public void navigateToHeadphone() {
		driver.get("https://advantageonlineshopping.com/#/");
		driver.findElement(By.id("headphonesTxt")).click();
	}
	public void addHeadphoneToCart(String item) {
		driver.findElement(By.linkText(item)).click();
		driver.findElement(By.name("save_to_cart")).click();;
	}
	public void goToCart() {
		driver.findElement(By.id("shoppingCartLink")).click();
	}
	public List<WebElement> getCartItems() {
		List<WebElement> itemsInCart = driver.findElements(By.xpath("//label[@class=\"roboto-regular productName ng-binding\"]"));
		return itemsInCart;
	}
	public void removeProduct(WebElement toRemove) {
		toRemove.findElement(By.linkText("REMOVE")).click();
	}
}
