package day6;

import org.testng.annotations.Test;
import org.testng.annotations.BeforeMethod;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;
import org.testng.annotations.AfterMethod;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.AfterTest;

public class exercise_2 {
	WebDriver driver;
  @Test
  public void register() {
	  driver.findElement(By.linkText("Register")).click();;
	  driver.findElement(By.id("FirstName")).sendKeys("Albin");
	  driver.findElement(By.id("LastName")).sendKeys("N");
  }
  @Test(dependsOnMethods = {"register"})
  public void login() {
	  driver.findElement(By.linkText("Log in")).click();
	  driver.findElement(By.id("Email")).sendKeys("Albin@");
	  driver.findElement(By.id("Password")).sendKeys("Alb");
  }
  @BeforeMethod
  public void beforeMethod() {
	  driver.get("https://demowebshop.tricentis.com/");
	  System.out.println("Test started");
  }

  @AfterMethod
  public void afterMethod() {
	  System.out.println("Test ended");
  }

  @BeforeTest
  public void beforeTest() {
	  driver = new EdgeDriver();
  }

  @AfterTest
  public void afterTest() {
	  driver.quit();
  }

}
