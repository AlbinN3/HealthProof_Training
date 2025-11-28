package stepdefenition;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc2_register {
	@Given("the user want to register")
	public void the_user_want_to_register() {
	    System.out.println("User in registration page");
	}
	@When("he enters the username as {string} and password as {string}")
	public void he_enters_the_username_as_and_password_as(String uname, String pwd) {
	    System.out.println("Username is "+uname);
	    System.out.println("Password is "+pwd);
	}
	@Then("he reaches the welcome page")
	public void he_reaches_the_welcome_page() {
	    System.out.println("The user is in welcome page");
	}
}
