package stepdefenition;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class validInvalidLogin {
	
	WebDriver driver = new EdgeDriver();
	@Given("user in login page for valid values")
	public void user_in_login_page_for_valid_values() {
	    driver.get("https://demowebshop.tricentis.com/");
	    driver.findElement(By.linkText("Log in")).click();
	}
	@When("user gives valid details")
	public void user_gives_valid_details() {
	    driver.findElement(By.id("FirstName")).sendKeys("Alb");
	    driver.findElement(By.id("LastName")).sendKeys("Nel");
	}
	@Then("user goes to Home page")
	public void user_goes_to_home_page() {
	    System.out.println("User goes home page");
	}


	@Given("user in login page for invalid value")
	public void user_in_login_page_for_invalid_value() {
		driver.get("https://demowebshop.tricentis.com/");
	    driver.findElement(By.linkText("Log in")).click();
	}
	@When("user gives invalid value")
	public void user_gives_invalid_value() {
		driver.findElement(By.id("FirstName")).sendKeys("111");
	    driver.findElement(By.id("LastName")).sendKeys("Nel");
	}
	@Then("System shows error")
	public void system_shows_error() {
		System.out.println("System shows error");
	}




}
