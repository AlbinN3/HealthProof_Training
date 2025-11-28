package day2;

import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class exercise_7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://blazedemo.com/");
		WebElement button = driver.findElement(By.xpath("//input[@class='btn btn-primary']"));
		button.click();
		List<WebElement> choose = driver.findElements(By.xpath("//*[@class='btn btn-small']"));
		System.out.println(choose.size());
		driver.quit();
	}

}
