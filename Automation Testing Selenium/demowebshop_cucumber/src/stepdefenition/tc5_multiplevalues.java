package stepdefenition;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc5_multiplevalues {
	
	@Given("the user in the login window")
	public void the_user_in_the_login_window() {
	    System.out.println("User in login");
	}


	@When("he enters valid {string} and valid {string}")
	public void he_enters_valid_and_valid(String user, String pass) {
		System.out.println("Username "+user+"  "+"Password "+pass);
	}



	@Then("he reaches the HOME page")
	public void he_reaches_the_home_page() {
	    System.out.println("User in home page");
	}



}
