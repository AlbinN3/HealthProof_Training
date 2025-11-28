package stepdefenition;

import static org.testng.Assert.assertEquals;

import java.io.IOException;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;

import com.relevantcodes.extentreports.LogStatus;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;
import io.qameta.allure.Allure;
import pageObjects.RegisterUser;
import utilities.Screenshot;
import utilities.reporter;

public class RegsiterWithValidDetails extends reporter{
	String username;
	WebElement user;
	
	WebDriver driver = Hooks.getDriver();
	Screenshot screenshot = new Screenshot(driver);
	RegisterUser registeruser = new RegisterUser(driver);
	
	@Given("user is in the registration page")
	public void user_is_in_the_registration_page() throws InterruptedException {
		driver.get("https://advantageonlineshopping.com/#/");
	    registeruser.clickRegister();
	    registeruser.clickCreateNewAccount();
	}
	
	@When("user gives valid details: username {string}, email {string},password {string}")
	public void user_gives_valid_details_username_email_password(String username, String email, String password) throws InterruptedException {
		this.username = username;
		logger = extent.startTest("Regsiter");
		Thread.sleep(1000);
	    registeruser.enterUsername(username);
	    Thread.sleep(1000);
	    registeruser.enterEmail(email);
	    Thread.sleep(1000);
	    registeruser.enterPassword(password);
	    Thread.sleep(1000);
	    registeruser.enterConfirmPassword(password);
	    Thread.sleep(1000);
	    registeruser.clickIAgree();
	    Thread.sleep(1000);
	    registeruser.clickRegisterButton();
	    Thread.sleep(1000);
	    user = registeruser.ifRegistered();
	    Thread.sleep(1000);
	}
	
	@Then("user moves to home page")
	public void user_moves_to_home_page() {
		try {
			assertEquals(username,user.getText());
			logger.log(LogStatus.PASS, "Registration successful with valid values");
			Allure.step("Registration successful with valid values");
		}catch(AssertionError e) {
			logger.log(LogStatus.FAIL, "Registration with valid details failed, test failed");
			try {
				screenshot.takeScreenshot("Registration_failure");
				Allure.addAttachment("Registration_failure", e.getMessage());
				throw e;
			} catch (IOException e1) {
				e1.printStackTrace();
			}
		}finally {
			extent.endTest(logger);
		}
	}
}
