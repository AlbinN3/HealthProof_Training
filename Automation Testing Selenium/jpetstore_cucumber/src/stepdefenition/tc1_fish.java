package stepdefenition;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc1_fish {

	WebDriver driver = new EdgeDriver();
	@Given("the user in the HOME page for fish")
	public void the_user_in_the_home_page_for_fish() {
	    driver.get("https://petstore.octoperf.com/");
	    driver.findElement(By.linkText("Enter the Store")).click();
	}
	@When("he selector enter the store he selects the fish")
	public void he_selector_enter_the_store_he_selects_the_fish() {
	    driver.findElement(By.xpath("//img[@src=\"../images/fish_icon.gif\"]")).click();
	}
	@Then("he reaches the fish products window")
	public void he_reaches_the_fish_products_window() {
	    WebElement heading = driver.findElement(By.xpath("//h2"));
	    if(heading.getText().equals("Fish")){
	    	System.out.println("User in fish page");
	    }
	    else {
	    	System.out.println("User not in fish page");
	    }
	    driver.quit();
	}



}
