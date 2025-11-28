package testCases1;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import pageObjects1.welcomePage;

public class tc3_fish {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://petstore.octoperf.com/");
		welcomePage welcome = new welcomePage(driver);
		welcome.enterTheStore();
		welcome.clickFish();
		welcome.clickProduct();
		Thread.sleep(2000);
		driver.quit();
	}

}
