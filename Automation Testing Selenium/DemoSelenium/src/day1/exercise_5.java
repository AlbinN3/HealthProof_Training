package day1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class exercise_5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("http://demowebshop.tricentis.com/");
		WebElement logo = driver.findElement(By.xpath("/html/body/div[4]/div[1]/div[1]/div[1]/a/img"));
		if(logo.getAttribute("src")==null){
			System.out.println("No src");
		}
		else {
			System.out.println("There is src");
		}
		driver.quit();
	}

}
