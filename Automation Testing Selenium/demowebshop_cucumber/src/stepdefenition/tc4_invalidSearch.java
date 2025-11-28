package stepdefenition;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc4_invalidSearch {

	@Given("the user in the home page for searching invalid project")
	public void the_user_in_the_home_page_for_searching_invalid_project() {
		System.out.println("Invalid product");

	}
	@When("he enters the invalid product details and submits")
	public void he_enters_the_invalid_product_details_and_submits() {
	    System.out.println("Submits invalid product");

	}
	@Then("system displays error message")
	public void system_displays_error_message() {
	    System.out.println("Error");

	}



}
