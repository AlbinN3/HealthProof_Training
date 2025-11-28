package stepdefenition;

import io.cucumber.java.After;
import io.cucumber.java.Before;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc2_validlogin {
	@Before
	public void openRegister() {
		System.out.println("User navigates to register page");
	}
	
	@When("user enters the valid details")
	public void user_enters_the_valid_details() {
		System.out.println("user gives valid details");
	    
	}
	@Then("user goes to home page")
	public void user_goes_to_home_page() {
	    System.out.println("User goes to home page");
	}
	@After
	public void closeBrowser() {
		System.out.println("Closing browser");
	}
}
