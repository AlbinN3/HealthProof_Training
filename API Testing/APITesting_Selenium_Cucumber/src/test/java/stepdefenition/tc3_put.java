package stepdefenition;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;
import io.restassured.RestAssured;
import io.restassured.http.ContentType;
import io.restassured.response.Response;
import io.restassured.specification.RequestSpecification;

public class tc3_put {
	private static final String BASE_URL = "https://jsonplaceholder.typicode.com/posts/1";
	Response response;
	RequestSpecification request;
	String output;
	String REQUEST_BODY=
			"{"+
                    "\"title\":\"foo\","+
                    "\"body\":\"berrrr\","+
                    "\"userId\":1"+
            "}";
	@Given("the user in the URL https:\\/\\/jsonplaceholder.typicode.com\\/posts\\/{int}")
	public void the_user_in_the_URL_https_jsonplaceholder_typicode_com_posts(Integer int1) {
		System.out.println("Base URL is"+BASE_URL);
	    RestAssured.baseURI=BASE_URL;
	}

	@When("he sends the put request")
	public void he_sends_the_put_request() {
		request=RestAssured.given()
				.contentType(ContentType.JSON)
				.body(REQUEST_BODY);
		response = request.put(BASE_URL);
	}

	@Then("he gets the response of {int} and the updated data")
	public void he_gets_the_response_of_and_the_updated_data(Integer int1) {
		output = response.asString();
		System.out.println("PUT");
	    System.out.println(output);
	    int statuscode = response.getStatusCode();
	    System.out.println(statuscode);
	}
}
