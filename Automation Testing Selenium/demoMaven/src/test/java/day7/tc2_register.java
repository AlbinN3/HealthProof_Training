package day7;

import org.testng.annotations.Test;
import org.testng.annotations.BeforeTest;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;
import org.testng.annotations.AfterTest;

public class tc2_register {
	WebDriver driver = new EdgeDriver();
  @Test
  public void f() {
	  String s = driver.getTitle();
	  System.out.println("Test 2 is running");
  }
  @BeforeTest
  public void beforeTest() {
	  driver.get("https://demowebshop.tricentis.com/");
  }

  @AfterTest
  public void afterTest() {
	  driver.quit();
  }

}
