package stepdefenition;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc3_cat {

	WebDriver driver = new EdgeDriver();
	@Given("the user in the HOME page for cat")
	public void the_user_in_the_home_page_for_cat() {
	    driver.get("https://petstore.octoperf.com/");
	    driver.findElement(By.linkText("Enter the Store")).click();
	}
	@When("he selects enter the store he selects the cats")
	public void he_selects_enter_the_store_he_selects_the_cats() {
		driver.findElement(By.xpath("//img[@src=\"../images/dogs_icon.gif\"]")).click();
	}
	@Then("he reaches the cats products view")
	public void he_reaches_the_cats_products_view() {
		WebElement heading = driver.findElement(By.xpath("//h2"));
	    if(heading.getText().equals("Dogs")){
	    	System.out.println("User in cat page");
	    }
	    else {
	    	System.out.println("User not in cat page");
	    }
	    driver.quit();
	}



}
