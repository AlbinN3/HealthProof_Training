package stepdefenition;

import static org.testng.Assert.assertTrue;

import java.io.IOException;

import org.openqa.selenium.WebDriver;
import com.relevantcodes.extentreports.LogStatus;

import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;
import io.qameta.allure.Allure;
import pageObjects.RegisterUser;
import utilities.Screenshot;
import utilities.reporter;

public class RegisterWithInvalidDetails extends reporter{
	
	
	WebDriver driver = Hooks.getDriver();
	Screenshot screenshot = new Screenshot(driver);
	RegisterUser registeruser = new RegisterUser(driver);
	
	@When("user gives invalid details: username {string}, email {string}, password {string}")
	public void user_gives_invalid_details_username_email_password(String username, String email, String password) throws InterruptedException {
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
	}
	@Then("the system shows an error message")
	public void the_system_shows_an_error_message() {
//	    WebElement wrongEmailLabel = driver.findElement(By.xpath("//*[@id=\"formCover\"]/div[1]/div[1]/sec-view[2]/div/label"));
	    try {
	    	assertTrue(registeruser.ifEmailWrong());
	    	logger.log(LogStatus.PASS, "System shows error message for invalid email");
	    	Allure.step("System does not accept invalid email");
	    }catch(AssertionError e) {
	    	logger.log(LogStatus.FAIL, "System does not show error message for invalid email, test fail");
	    	try {
				screenshot.takeScreenshot("Wrong_email"); 
				Allure.addAttachment("System accepts invalid email", e.getMessage());
				throw e;
			} catch (IOException e1) {
				e1.printStackTrace();
			}
	    }
	}
	
}
