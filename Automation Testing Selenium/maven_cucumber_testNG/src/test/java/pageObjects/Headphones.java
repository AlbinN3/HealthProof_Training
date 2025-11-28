package pageObjects;

import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

public class Headphones {
WebDriver driver;
	
	public Headphones(WebDriver driver) {
		this.driver = driver;
	}
	
	public void clickHeadphones() {
		driver.get("https://advantageonlineshopping.com/#/");
		driver.findElement(By.id("headphonesTxt")).click();
	}
	
	public Integer getItemCount() {
		WebElement itemCount = driver.findElement(By.cssSelector(".titleItemsCount.ng-binding"));
		String text = itemCount.getText();
		Integer number = Integer.parseInt(text.split(" ")[0]);
		return number;
	}
	
	public List<WebElement> getItems(){
		List<WebElement> items = driver.findElements(By.xpath("//a[@class=\"productName ng-binding\"]"));
		return items;
	}
}
