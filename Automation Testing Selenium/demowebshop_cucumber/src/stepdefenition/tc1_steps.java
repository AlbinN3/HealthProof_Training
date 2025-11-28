package stepdefenition;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc1_steps {

	WebDriver driver = new EdgeDriver();
	@Given("the user in the login page")
	public void the_user_in_the_login_page() {
		driver.get("https://demowebshop.tricentis.com/");
		driver.findElement(By.linkText("Log in")).click();
	}
	@When("the user gives the valid details")
	public void the_user_gives_the_valid_details() {
	    driver.findElement(By.id("Email")).sendKeys("Albin");
	    driver.findElement(By.id("Password")).sendKeys("Hello");
	}
	@Then("user moves to HOME page")
	public void user_moves_to_home_page() {
	    driver.quit();
	}



}
