package stepdefenition;

import static org.testng.Assert.assertTrue;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

import com.relevantcodes.extentreports.LogStatus;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;
import io.qameta.allure.Allure;
import pageObjects.Cart;
import utilities.Screenshot;
import utilities.reporter;

public class verifyCart extends reporter{
	
	WebDriver driver = Hooks.getDriver();
	Cart cart = new Cart(driver);
	Screenshot screenshot = new Screenshot(driver);
	@Given("user in the headphones section")
	public void user_in_the_headphones_section() {
	    cart.navigateToHeadphone();
	}
	@When("user adds a headphone to cart")
	public void user_adds_a_headphone_to_cart() {
		logger = extent.startTest("Verify_Cart");
		cart.addHeadphoneToCart("Bombizini guzini");
	}
	@Then("the product appears in the cart")
	public void the_product_appears_in_the_cart() {
		cart.goToCart();
	    List<WebElement> itemElement = cart.getCartItems();
	    List<String> itemString = new ArrayList<>();
	    for(WebElement e:itemElement) {
	    	itemString.add(e.getText().toLowerCase());
	    }
	    try {
	    	assertTrue(itemString.contains("bombizini guzini"));
	    	logger.log(LogStatus.PASS, "Item successfully added to cart");
	    	Allure.step("Item successfully added to cart");
	    }catch(AssertionError e) {
	    	logger.log(LogStatus.FAIL, "Item did not appeared in cart,test failed");
	    	try {
	    		Allure.addAttachment("Item did not appeared in cart,test failed", e.getMessage());
				screenshot.takeScreenshot("Cart");
			} catch (IOException e1) {
				e1.printStackTrace();
			}
	    }
	}
}
