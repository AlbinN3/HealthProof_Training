package stepdefenition;

import static org.testng.Assert.assertEquals;

import java.io.IOException;
import java.util.List;

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

public class HeadphoneCountCheck extends reporter{
	WebDriver driver = Hooks.getDriver();
	Headphones headphones = new Headphones(driver);
	Screenshot screenshot = new Screenshot(driver);
	
	Integer expectedItemCount;
	List<WebElement> items;
	Integer actualItemCounts;
	
	@Given("the user is in the headphone section")
	public void the_user_is_in_the_headphone_section() {
		headphones.clickHeadphones();
	}
	
	@When("the item count is displayed")
	public void the_item_count_is_displayed() {
		logger = extent.startTest("Item Count");
		expectedItemCount = headphones.getItemCount();
		items = headphones.getItems();
	    actualItemCounts = items.size();
	}
	
	@Then("the system shows that same amount of items")
	public void the_system_shows_that_same_amount_of_items() {
	    try {
	    	assertEquals(expectedItemCount,actualItemCounts);
	    	logger.log(LogStatus.PASS, "Item count is correct");
	    	Allure.step("Item count is correct");
	    }catch(AssertionError e) {
			try {
				screenshot.takeScreenshot("Item count is different");
				Allure.addAttachment("Item count does not match", e.getMessage());
				throw e;
			} catch (IOException e1) {
				e1.printStackTrace();
			}
	    }finally {
	    	extent.endTest(logger);
	    }
	}
	
}
