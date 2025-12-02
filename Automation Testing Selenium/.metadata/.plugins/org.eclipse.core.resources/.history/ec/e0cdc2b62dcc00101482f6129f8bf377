package stepdefenition;

import static org.testng.Assert.assertFalse;
import static org.testng.Assert.assertNull;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

import org.openqa.selenium.By;
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

public class removeFromCart extends reporter{
	WebDriver driver = Hooks.getDriver();
	Cart cart = new Cart(driver);
	List<WebElement> items = new ArrayList<>();
	Screenshot screenshot = new Screenshot(driver);
	
	@Given("user is in cart page")
	public void user_is_in_cart_page() {
		cart.navigateToHeadphone();
	    cart.addHeadphoneToCart("Bombizini guzini");
	}
	@When("user removes a product from cart")
	public void user_removes_a_product_from_cart() {
	    cart.goToCart();
	    items = cart.getCartItems();
	}
	@Then("product gets removed from cart")
	public void product_gets_removed_from_cart() {
		logger = extent.startTest("Remove from cart");
		WebElement checker = null;
	    for(WebElement e:items) {
	    	if("Bombizini guzini".equals(e.findElement(By.xpath("//label[@class=\"roboto-regular productName ng-binding\"]")).getText())) {
	    		cart.removeProduct(e);
	    		break;
	    	}
	    }
	    items = cart.getCartItems();
	    for(WebElement e:items) {
	    	if("Bombizini guzini".equals(e.findElement(By.xpath("//label[@class=\"roboto-regular productName ng-binding\"]")).getText())) {
	    		checker = e;
	    		break;
	    	}
	    }
	    try {
	    	assertNull(checker);
	    	logger.log(LogStatus.PASS, "Item removed successfully");
	    	Allure.step("Item removed successdully");
	    }catch(AssertionError e) {
	    	logger.log(LogStatus.FAIL, "Item did not removed");
	    	try {
	    		Allure.addAttachment("Item not removed", e.getMessage());
				screenshot.takeScreenshot("Item_Not_Removed");
			} catch (IOException e1) {
				e1.printStackTrace();
			}
	    }
	}
}
