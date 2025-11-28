package testCases;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import pageFactory.homePage;
import pageFactory.loginPage;

public class tc3_login_factory {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/");
		homePage home = new homePage(driver);
		home.clickLogin();
		loginPage login = new loginPage(driver);
		login.enterEmail("albin@gmail");
		login.enterPassword("Pass");
		Thread.sleep(2000);
		driver.quit();
	}

}
