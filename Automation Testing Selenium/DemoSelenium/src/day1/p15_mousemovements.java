package day1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.interactions.Actions;

public class p15_mousemovements {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/");
		WebElement computers = driver.findElement(By.linkText("COMPUTERS"));
		Actions actions = new Actions(driver);
		actions.moveToElement(computers).build().perform();
		WebElement notebooks = driver.findElement(By.linkText("Notebooks"));
		Thread.sleep(5000);
		notebooks.click();
		Thread.sleep(5000);
		driver.quit();
	}

}
