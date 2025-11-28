package day6;

import org.testng.annotations.Test;
import org.testng.annotations.BeforeMethod;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;
import org.testng.annotations.AfterMethod;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.AfterTest;

public class exercise_3 {
	WebDriver driver;
  @Test
  public void test1() {
	  driver.findElement(By.xpath("//img[@src=\"../images/fish_icon.gif\"]")).click();
	  driver.findElement(By.linkText("FI-SW-01")).click();
	  System.out.println("test fish is under execution");
  }
  @Test
  public void test2() {
	  driver.findElement(By.xpath("//img[@src=\"../images/dogs_icon.gif\"]")).click();
	  driver.findElement(By.linkText("K9-BD-01")).click();
	  System.out.println("test fish is under execution");
  }
  @BeforeMethod
  public void beforeMethod() {
	  driver.get("https://petstore.octoperf.com/");
	  driver.findElement(By.linkText("Enter the Store")).click();
	  System.out.println("Test Started");
  }

  @AfterMethod
  public void afterMethod() {
	  System.out.println("Test finished");
  }

  @BeforeTest
  public void beforeTest() {
	  driver = new EdgeDriver();
	  System.out.println("Test started");
	
  }

  @AfterTest
  public void afterTest() {
	  driver.quit();
	  System.out.println("Test over");
  }

}
