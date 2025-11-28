package stepdefenition;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc2_demowebshopregister {
	
	WebDriver driver = new EdgeDriver();
	@Given("the user in the registration page")
	public void the_user_in_the_registration_page() {
	    driver.get("https://demowebshop.tricentis.com/");
	    driver.findElement(By.linkText("Register")).click();
	}
	@When("he enters valid {string} and valid {string} and valid {string} and a valid {string}")
	public void he_enters_valid_and_valid_and_valid_and_a_valid(String gender, String firstname, String lastname, String email) throws InterruptedException {
	    if(gender.equals("Male")) {
	    	driver.findElement(By.id("gender-male")).click();
	    }
	    else {
	    	driver.findElement(By.id("gender-female"));
	    }
	    driver.findElement(By.id("FirstName")).sendKeys(firstname);
	    driver.findElement(By.id("LastName")).sendKeys(lastname);
	    driver.findElement(By.id("Email")).sendKeys(email);
	    Thread.sleep(4000);
	}
	@Then("the system navigates to home page of the user")
	public void the_system_navigates_to_home_page_of_the_user() {
	    driver.quit();
	}



}
