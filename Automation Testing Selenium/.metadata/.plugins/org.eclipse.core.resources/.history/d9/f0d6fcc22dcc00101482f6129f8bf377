package stepdefenition;

import static org.testng.Assert.assertTrue;

import java.io.IOException;
import java.util.List;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

import com.relevantcodes.extentreports.LogStatus;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;
import io.qameta.allure.Allure;
import pageObjects.Search;
import utilities.Screenshot;
import utilities.reporter;

public class searchValid extends reporter{
	WebDriver driver = Hooks.getDriver();
	Screenshot screenshot = new Screenshot(driver);
	Search search = new Search(driver);
	
	@Given("user is in home page")
	public void user_is_in_home_page() {
	    search.getWebPage();
	}
	@When("the user searches for a valid product")
	public void the_user_searches_for_a_valid_product() {
		logger = extent.startTest("Valid search");
	    search.search("bom");
	}
	@Then("the system shows a list of products")
	public void the_system_shows_a_list_of_products() {
	    List<WebElement> result = search.searchResult();
	    try {
	    	assertTrue(result.size()>0);
	    	logger.log(LogStatus.PASS, "Valid search has results, test passed");
	    	Allure.step("Valid search has results, test passed");
	    }catch(AssertionError e) {
	    	logger.log(LogStatus.FAIL, "Valid search has no result, test failed");
	    	try {
	    		Allure.addAttachment("Valid search has no result, test failed", e.getMessage());
				screenshot.takeScreenshot("Valid_search");
			} catch (IOException e1) {
				e1.printStackTrace();
			}
	    }
	}
}
