package stepdefenition;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;
import io.restassured.RestAssured;
import io.restassured.response.Response;
import io.restassured.specification.RequestSpecification;

public class tc1_steps {
	private static final String BASE_URL = "https://api.restful-api.dev/";
	Response response;
	RequestSpecification request;
	String output;
	@Given("the user in the URL https:\\/\\/api.restful-api.dev\\/objects")
	public void the_user_in_the_URL_https_api_restful_api_dev_objects() {
	    System.out.println("Base URL is"+BASE_URL);
	    RestAssured.baseURI=BASE_URL;
	}

	@When("he sends the get request")
	public void he_sends_the_get_request() {
		request = RestAssured.given();
		response = request.get(BASE_URL);
	}

	@Then("he gets the response of {int}")
	public void he_gets_the_response_of(Integer int1) {
	    output = response.asString();
	    System.out.println("GET");
	    System.out.println(output);
	    int statuscode = response.getStatusCode();
	    System.out.println(statuscode);
	}
}
