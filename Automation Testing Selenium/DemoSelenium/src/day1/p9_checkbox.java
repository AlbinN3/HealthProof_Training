package day1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class p9_checkbox {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/");
		driver.findElement(By.linkText("Log in")).click();
		boolean expValue =false,actValue;
		WebElement rememberme = driver.findElement(By.id("RememberMe"));
		actValue=rememberme.isSelected();
		if(expValue==actValue) {
			System.out.println("Test is pass");
		}
		else {
			System.out.println("Test is fail");
		}
		driver.quit();
	}

}
