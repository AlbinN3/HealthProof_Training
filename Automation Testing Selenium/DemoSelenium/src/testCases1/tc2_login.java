package testCases1;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import pageObjects1.homePage;
import pageObjects1.loginPage;

public class tc2_login {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demo.opencart.com/");
		homePage home = new homePage(driver);
		home.clickMyAccount();
		home.clickLogin();
		loginPage login = new loginPage(driver);
		login.enterEmail("Albin@gmail");
		login.enterPassword("Albin");
		driver.quit();
	}

}
