package day1;

import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class p10_radiobutton {
	public static void main(String[] args) throws InterruptedException {
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/");
		List<WebElement> poll = driver.findElements(By.name("pollanswers-1"));
		int totalValues = poll.size();
		for(int i=0;i<totalValues;i++) {
			poll.get(i).click();
			Thread.sleep(5000);
		}
		driver.quit();
	}
}
