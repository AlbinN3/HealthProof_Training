package day6;

import org.testng.annotations.Test;
import org.testng.annotations.DataProvider;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.support.ui.Select;
import org.testng.annotations.AfterTest;

public class exercise_4 {
	WebDriver driver;
  @Test(dataProvider = "dp")
  public void test( String fromplace,String toplace) throws InterruptedException {
	  driver =new EdgeDriver();
	  driver.get("https://blazedemo.com/");
	  WebElement from = driver.findElement(By.name("fromPort"));
	  Select selectfrom = new Select(from);
	  WebElement to = driver.findElement(By.name("toPort"));
	  Select selectto = new Select(to);
	  selectfrom.selectByContainsVisibleText(fromplace);
	  selectto.selectByContainsVisibleText(toplace);
	  driver.findElement(By.xpath("//input")).click();
	  Thread.sleep(2000);
	  driver.quit();
  }

  @DataProvider
  public Object[][] dp() {
    return new Object[][] {
      new Object[] {  "Paris","Berlin" },
      new Object[] {  "Boston","Rome" },
      new Object[] {  "Portland","New York" },
    };
  }
  @AfterTest
  public void afterTest() {
  }

}