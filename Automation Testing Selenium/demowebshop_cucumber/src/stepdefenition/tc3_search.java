package stepdefenition;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc3_search {

	@Given("the user in the home page for searching valid project")
	public void the_user_in_the_home_page_for_searching_valid_project() {
		System.out.println("Valid product");
	}
	@When("he enters the valid product details and submits")
	public void he_enters_the_valid_product_details_and_submits() {
	    System.out.println("Submits valid product");
	}
	@Then("system displays the product info")
	public void system_displays_the_product_info() {
	    System.out.println("Valid product details");
	}



}
