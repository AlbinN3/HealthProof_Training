package stepdefenition;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;
import io.restassured.RestAssured;
import io.restassured.http.ContentType;
import io.restassured.response.Response;
import io.restassured.specification.RequestSpecification;

public class tc4_patch {
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
	@Given("the user in the URL for patch https:\\/\\/jsonplaceholder.typicode.com\\/posts\\/{int}")
	public void the_user_in_the_URL_for_patch_https_jsonplaceholder_typicode_com_posts(Integer int1) {
		System.out.println("Base URL is"+BASE_URL);
	    RestAssured.baseURI=BASE_URL;
	}

	@When("he sends the patch request")
	public void he_sends_the_patch_request() {
		request=RestAssured.given()
				.contentType(ContentType.JSON)
				.body(REQUEST_BODY);
		response = request.patch(BASE_URL);
	}

	@Then("he gets the response of {int} and the changed data")
	public void he_gets_the_response_of_and_the_changed_data(Integer int1) {
		output = response.asString();
		System.out.println("PATCH");
	    System.out.println(output);
	    int statuscode = response.getStatusCode();
	    System.out.println(statuscode);
	}
}
