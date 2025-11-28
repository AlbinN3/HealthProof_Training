package stepdefenition;

import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.Keys;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;

public class tc1_google {
	
	WebDriver driver = new EdgeDriver();
	@Given("the user in the google page")
	public void the_user_in_the_google_page() {
	    driver.get("https://www.google.com/");
	}
	@When("he enters the {string} to search and submits")
	public void he_enters_the_to_search_and_submits(String search) throws InterruptedException {
	    WebElement searchbox = driver.findElement(By.xpath("//textarea"));
	    searchbox.click();
	    searchbox.sendKeys(search);
	    searchbox.sendKeys(Keys.ENTER);
	    Thread.sleep(4000);
	}
	@Then("the user clicks the first link")
	public void the_user_clicks_the_first_link() throws InterruptedException {
	    List<WebElement> firstlink = driver.findElements(By.xpath("//h3"));
	    firstlink.get(0).click();
	    Thread.sleep(4000);
	    driver.quit();
	}



}
