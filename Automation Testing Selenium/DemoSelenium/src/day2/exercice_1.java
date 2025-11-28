package day2;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.support.ui.Select;

public class exercice_1 {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://blazedemo.com/");
		Select from = new Select(driver.findElement(By.xpath("//select[@name='fromPort']")));
		WebElement name = from.getFirstSelectedOption();
		System.out.println(name.getText());
		Thread.sleep(5000);
		driver.quit();
	}

}
