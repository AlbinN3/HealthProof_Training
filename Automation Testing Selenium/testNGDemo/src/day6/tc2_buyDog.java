package day6;

import org.openqa.selenium.By;
import org.openqa.selenium.Keys;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.testng.annotations.Test;

import com.relevantcodes.extentreports.LogStatus;

public class tc2_buyDog extends reporter_jpetstore{
  @Test
  public void f() throws InterruptedException {
	  logger = extent.startTest("BuyDog");
	  WebDriver driver = new EdgeDriver();
	  driver.get("https://petstore.octoperf.com/");
	  driver.findElement(By.linkText("Enter the Store")).click();
	  driver.findElement(By.xpath("//img[@src='../images/dogs_icon.gif']")).click();
	  driver.findElement(By.linkText("K9-BD-01")).click();
	  WebElement heading = driver.findElement(By.tagName("h2"));
	  if(heading.getText().equals("Poodle")) {
		  logger.log(LogStatus.PASS, "Poodle product is there");
	  }
	  else {
		  logger.log(LogStatus.FAIL, "Poodle dog is not there");
	  }
	  driver.findElement(By.xpath("//a[@href=\"/actions/Cart.action?addItemToCart=&workingItemId=EST-6\"]")).click();
	  driver.findElement(By.name("EST-6")).sendKeys(Keys.BACK_SPACE);
	  driver.findElement(By.name("EST-6")).sendKeys("10");
	  Thread.sleep(2000);
	  driver.quit();
  }
}
