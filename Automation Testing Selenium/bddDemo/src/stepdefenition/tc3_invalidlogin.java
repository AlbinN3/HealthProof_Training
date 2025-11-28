package stepdefenition;

import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc3_invalidlogin {


	@When("user enters the invalid details")
	public void user_enters_the_invalid_details() {
	    System.out.println("User gives invalid details");
	}
	@Then("System throws an error")
	public void system_throws_an_error() {
	    System.out.println("System throws error");
	}



}
