package stepdefenition;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc2_dogs {

	WebDriver driver = new EdgeDriver();
	@Given("the user in the HOME page for dog")
	public void the_user_in_the_home_page_for_dog() {
	    driver.get("https://petstore.octoperf.com/");
	    driver.findElement(By.linkText("Enter the Store")).click();
	}
	@When("he selects enter the store he selects the dog")
	public void he_selects_enter_the_store_he_selects_the_dog() {
		driver.findElement(By.xpath("//img[@src=\"../images/dogs_icon.gif\"]")).click();
	}
	@Then("he reaches the dog products window")
	public void he_reaches_the_dog_products_window() {
		WebElement heading = driver.findElement(By.xpath("//h2"));
	    if(heading.getText().equals("Dogs")){
	    	System.out.println("User in dog page");
	    }
	    else {
	    	System.out.println("User not in dog page");
	    }
	    driver.quit();
	}



}
