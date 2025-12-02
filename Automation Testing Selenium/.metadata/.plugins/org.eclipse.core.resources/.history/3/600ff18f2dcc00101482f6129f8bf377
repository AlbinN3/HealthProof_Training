package stepdefenition;

import static org.testng.Assert.assertEquals;

import java.io.IOException;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

import com.relevantcodes.extentreports.LogStatus;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;
import io.qameta.allure.Allure;
import pageObjects.Headphones;
import utilities.Screenshot;
import utilities.reporter;

public class duplicateProduct extends reporter{
	WebDriver driver = Hooks.getDriver();
	Headphones headphones = new Headphones(driver);
	Screenshot screenshot = new Screenshot(driver);
	List<WebElement> items = new ArrayList<>();
	Set<String> itemSet = new HashSet<>();
	
	@Given("user is in main page")
	public void user_is_in_main_page() {
		headphones.clickHeadphones();
//		Thread.sleep(9000);
	}
	@When("the user selects headphones")
	public void the_user_selects_headphones() {
		items = headphones.getItems();
	}
	@Then("System only shows the unique products")
	public void system_only_shows_the_unique_products() {
		logger = extent.startTest("Duplicate Product");
	    for(WebElement e: items) {
	    	itemSet.add(e.getText());
	    }
	    try {
	    	assertEquals(itemSet.size(),items.size());
	    	logger.log(LogStatus.PASS, "There are no duplicate items");
	    	Allure.step("No duplicate items");
	    }catch(AssertionError e) {
	    	logger.log(LogStatus.FAIL, "There are duplicate items, test failed");
	    	try {
				screenshot.takeScreenshot("Duplicate_Product");
				Allure.addAttachment("There are duplicate elements", e.getMessage());
			} catch (IOException e1) {
				e1.printStackTrace();
			}
	    }
	}
}
