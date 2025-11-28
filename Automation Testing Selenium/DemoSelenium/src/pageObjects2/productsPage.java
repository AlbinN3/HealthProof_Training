package pageObjects2;

import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

public class productsPage {
	WebDriver driver;
	WebElement addToCart;
	public productsPage(WebDriver driver) {
		this.driver=driver;
	}
	public void verifyItemExists(String s) {
		List<WebElement> prodList = driver.findElements(By.className("inventory_item_name"));
		for(WebElement element:prodList) {
			if(element.getText().equals(s)) {
				System.out.println("Element Exists");
				return;
			}
		}
		System.out.println("Element does not exist");
	}
	public void addToCart(String s) {
		List<WebElement> prodList = driver.findElements(By.className("inventory_item_name"));
		for(WebElement element:prodList) {
			if(element.getText().equals(s)) {
				element.click();
				driver.findElement(By.id("add-to-cart")).click();
				return;
			}
		}
		System.out.println("Element does not exist");
	}
	public void backToProducts() {
		driver.findElement(By.id("back-to-products")).click();
	}
}
