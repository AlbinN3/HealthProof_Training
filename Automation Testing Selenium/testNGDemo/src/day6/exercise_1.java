package day6;

import org.testng.annotations.Test;
import org.testng.annotations.BeforeTest;

import static org.testng.Assert.assertEquals;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.support.ui.Select;
import org.testng.annotations.AfterTest;

public class exercise_1 {
	WebDriver driver = new EdgeDriver();
  @Test
  public void f() {
	  WebElement selectfrom = driver.findElement(By.name("fromPort"));
	  Select departure = new Select(selectfrom);
	  departure.selectByContainsVisibleText("Portland");
	  WebElement selectto = driver.findElement(By.name("toPort"));
	  Select destination = new Select(selectto);
	  destination.selectByContainsVisibleText("Berlin");
	  WebElement findFlights = driver.findElement(By.xpath("//input"));
	  findFlights.click();
	  String actTitle = driver.getTitle();
	  String expTitle = "BlazeDemo - reserve";
	  assertEquals(actTitle,expTitle);
  }
  @BeforeTest
  public void beforeTest() {
	  driver.get("https://blazedemo.com/");
  }

  @AfterTest
  public void afterTest() {
	  driver.quit();
  }

}
