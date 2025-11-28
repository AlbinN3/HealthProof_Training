package testCases2;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import pageObjects2.cartPage;
import pageObjects2.loginPage;
import pageObjects2.productsPage;



public class tc1_buyItem {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://www.saucedemo.com/");
		loginPage login = new loginPage(driver);
		login.enterUserName("standard_user");
		Thread.sleep(1000);
		login.enterPassword("secret_sauce");
		Thread.sleep(1000);
		login.clickLogin();
		productsPage product = new productsPage(driver);
		product.verifyItemExists("Sauce Labs Bolt T-Shirt");
		product.addToCart("Sauce Labs Bolt T-Shirt");
		Thread.sleep(1000);
		cartPage cart = new cartPage(driver);
		cart.cartsPage();
		Thread.sleep(1000);
		cart.clickCheckout();
		cart.enterFirstName("Albin");
		cart.enterLastName("Nelson");
		cart.enterZip("123");
		Thread.sleep(1000);
		cart.clickContinue();
		driver.quit();
	}

}
