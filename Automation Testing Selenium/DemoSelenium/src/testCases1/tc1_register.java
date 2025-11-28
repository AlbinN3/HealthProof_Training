package testCases1;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import pageObjects1.homePage;
import pageObjects1.registerPage;

public class tc1_register {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		homePage home = new homePage(driver);
		driver.get("https://demo.opencart.com/");
		home.clickMyAccount();
		home.clickRegister();
		registerPage register = new registerPage(driver);
		register.enterEmail("albin@gmail");
		register.enterFirstname("albin");
		register.enterLastName("nelson");
		register.enterPassword("Albin@123");
		driver.quit();
	}

}
