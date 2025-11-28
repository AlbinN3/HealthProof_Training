package testCases2;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import pageObjects2.cartPage;
import pageObjects2.loginPage;
import pageObjects2.productsPage;

public class tc2_buymultipleitems {

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
		product.addToCart("Sauce Labs Bolt T-Shirt");
		Thread.sleep(4000);
		product.backToProducts();
		Thread.sleep(4000);
		product.addToCart("Sauce Labs Bike Light");
		product.backToProducts();
		product.addToCart("Sauce Labs Fleece Jacket");
		product.backToProducts();
		product.addToCart("Test.allTheThings() T-Shirt (Red)");
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
