package day1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.support.ui.Select;

public class p6_listbox {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://blazedemo.com/");
		Select flyfrom = new Select(driver.findElement(By.name("fromPort")));
		flyfrom.selectByVisibleText("Mexico city");
		Thread.sleep(5000);
		driver.quit();
	}

}
