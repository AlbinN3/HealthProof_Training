package pageObjects;

import java.time.Duration;
import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.Keys;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

public class Search {
	WebDriver driver;
	WebDriverWait wait;
	public Search(WebDriver driver) {
		this.driver = driver;
		this.wait = new WebDriverWait(driver, Duration.ofSeconds(30));
	}
	public void getWebPage() {
		driver.get("https://advantageonlineshopping.com/#/");
	}
	public void search(String searchText) {
		wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//input[@name=\"mobile_search\"]"))).click();
		driver.findElement(By.xpath("//input[@name=\"mobile_search\"]")).sendKeys(searchText);
		driver.findElement(By.xpath("//input[@name=\"mobile_search\"]")).sendKeys(Keys.ENTER);
	}
	public List<WebElement> searchResult() {
		List<WebElement> result = driver.findElements(By.xpath("//a[@class=\"productName ng-binding\"]"));
		return result;
	}
	public WebElement noResult() {
		return driver.findElement(By.xpath("//*[@id=\"searchPage\"]/div[3]/div/label/span"));
	}
}
