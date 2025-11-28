package day6;

import org.openqa.selenium.By;
import org.openqa.selenium.Keys;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.testng.annotations.Test;

import com.relevantcodes.extentreports.LogStatus;

public class tc1_buyFish extends reporter_jpetstore{
  @Test
  public void f() throws InterruptedException {
	  logger = extent.startTest("BuyFish");
	  WebDriver driver = new EdgeDriver();
	  driver.get("https://petstore.octoperf.com/");
	  driver.findElement(By.linkText("Enter the Store")).click();
	  driver.findElement(By.xpath("//img[@src='../images/fish_icon.gif']")).click();
	  driver.findElement(By.linkText("FI-SW-01")).click();
	  WebElement heading = driver.findElement(By.tagName("h2"));
	  if(heading.getText().equals("Angelfish")) {
		  logger.log(LogStatus.PASS, "Angelfish product is there");
	  }
	  else {
		  logger.log(LogStatus.FAIL, "Angelfish product is not there");
	  }
	  driver.findElement(By.linkText("Add to Cart")).click();
	  driver.findElement(By.name("EST-1")).sendKeys(Keys.BACK_SPACE);
	  driver.findElement(By.name("EST-1")).sendKeys("10");
	  Thread.sleep(2000);
	  driver.quit();
  }
}
