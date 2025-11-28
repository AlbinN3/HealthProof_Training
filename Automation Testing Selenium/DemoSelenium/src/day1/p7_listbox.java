package day1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.support.ui.Select;

public class p7_listbox {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://blazedemo.com/");
		Select flyfrom = new Select(driver.findElement(By.name("fromPort")));
		flyfrom.selectByIndex(1);
		driver.quit();
	}

}
