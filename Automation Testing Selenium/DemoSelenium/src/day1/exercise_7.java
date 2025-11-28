package day1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.interactions.Actions;

public class exercise_7 {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/");
		WebElement books = driver.findElement(By.linkText("BOOKS"));
		books.click();
		WebElement book = driver.findElement(By.xpath("/html/body/div[4]/div[1]/div[4]/div[2]/div[2]/div[2]/div[3]/div[1]/div/div[2]/h2/a"));
		book.click();
		WebElement booktobuy = driver.findElement(By.id("add-to-cart-button-13"));
		booktobuy.click();
		WebElement cart = driver.findElement(By.partialLinkText("Shopping cart"));
		Actions actions = new Actions(driver);
		Thread.sleep(5000);
		actions.moveToElement(cart).build().perform();
		Thread.sleep(5000);
		WebElement gotocart = driver.findElement(By.xpath("//*[@id=\"flyout-cart\"]/div/div[4]/input"));
		Thread.sleep(5000);
		gotocart.click();
		Thread.sleep(5000);
		driver.quit();
	}

}
