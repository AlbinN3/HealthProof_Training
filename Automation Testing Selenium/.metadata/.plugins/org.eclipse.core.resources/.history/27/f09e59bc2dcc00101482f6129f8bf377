package stepdefenition;

import static org.testng.Assert.assertEquals;
import static org.testng.Assert.assertTrue;

import java.io.IOException;
import java.util.List;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

import com.relevantcodes.extentreports.LogStatus;

import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;
import io.qameta.allure.Allure;
import pageObjects.Search;
import utilities.Screenshot;
import utilities.reporter;

public class searchInvalid extends reporter{
	WebDriver driver = Hooks.getDriver();
	Screenshot screenshot = new Screenshot(driver);
	Search search = new Search(driver);
	
	@When("the user searches for an invalid product")
	public void the_user_searches_for_an_invalid_product() {
		logger = extent.startTest("Invalid search");
	    search.search("bbb");
	}
	@Then("the system shows no records found")
	public void the_system_shows_no_records_found() {
		WebElement noResult = search.noResult();
	    try {
	    	assertEquals(noResult.getText(),"No results for \"bbb\"");
	    	logger.log(LogStatus.PASS, "Invalid search has no results, test passed");
	    	Allure.step("Invalid search has no results, test passed");
	    }catch(AssertionError e) {
	    	logger.log(LogStatus.FAIL, "Invalid search has result, test failed");
	    	try {
				screenshot.takeScreenshot("Invalid_search");
				Allure.addAttachment("Invalid search has result, test failed", e.getMessage());
			} catch (IOException e1) {
				e1.printStackTrace();
			}
	    }
	}
}
