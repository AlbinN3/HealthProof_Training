package project;

import org.testng.annotations.Test;
import org.testng.annotations.BeforeTest;

import static org.testng.Assert.assertEquals;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;
import org.testng.annotations.AfterTest;

public class BuyDogs {
	WebDriver driver;
  @Test
  public void f() throws InterruptedException {
	  driver.findElement(By.linkText("Enter the Store")).click();
	  driver.findElement(By.xpath("//img[@src=\"../images/dogs_icon.gif\"]")).click();
	  String s =driver.findElement(By.tagName("h2")).getText();
	  Thread.sleep(5000);
	  String y="Dogs";
	  assertEquals(s,y);
  }
  @BeforeTest
  public void beforeTest() {
	  driver = new EdgeDriver();
	  driver.get("https://petstore.octoperf.com/");
  }

  @AfterTest
  public void afterTest() {
	  driver.quit();
  }

}
