package day7;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

public class tc1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		System.out.println("Test 1 is running");
		driver.get("https://demowebshop.tricentis.com/");
		System.out.println(driver.getTitle());
		driver.quit();
	}

}
