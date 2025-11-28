package day1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.support.ui.Select;

public class p8_listbox {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://blazedemo.com/");
		Select flyfrom = new Select(driver.findElement(By.name("fromPort")));
		int count = flyfrom.getOptions().size();
		for(int i=0;i<count;i++) {
			flyfrom.selectByIndex(i);
			Thread.sleep(5000);
		}
		driver.quit();
	}

}
