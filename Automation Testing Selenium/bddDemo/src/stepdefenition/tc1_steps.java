package stepdefenition;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc1_steps {


	@Given("the user in the login page")
	public void the_user_in_the_login_page() {
		System.out.println("Hi");
	}


	@When("he enters the valid details")
	public void he_enters_the_valid_details() {
		System.out.println("Hehe");
	}



	@Then("he reaches the HOME page")
	public void he_reaches_the_home_page() {
		System.out.println("Hello");
	}



}
