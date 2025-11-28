package pageObjects1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

public class welcomePage {
	WebDriver driver;
	WebElement enterTheStore,clickFish,clickProduct;
	public welcomePage(WebDriver driver){
		this.driver=driver;
	}
	public void enterTheStore() {
		enterTheStore = driver.findElement(By.linkText("Enter the Store"));
		enterTheStore.click();
	}
	public void clickFish() {
		clickFish = driver.findElement(By.xpath("//img[@src=\"../images/fish_icon.gif\"]"));
		clickFish.click();
	}
	public void clickProduct() {
		clickProduct = driver.findElement(By.linkText("FI-SW-01"));
		clickProduct.click();
	}
}
