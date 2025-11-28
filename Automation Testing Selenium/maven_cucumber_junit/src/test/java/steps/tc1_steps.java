package steps;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc1_steps {
	@Given("Iam new")
	public void iam_new() {
	    System.out.println("I am new");
	}

	@When("i test")
	public void i_test() {
	    System.out.println("I tested");
	}
	
	@Then("it is working")
	public void it_is_working() {
	    System.out.println("It is working");
	}
}