package day6;

import org.openqa.selenium.By;
import org.openqa.selenium.Keys;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.testng.annotations.Test;

import com.relevantcodes.extentreports.LogStatus;

public class tc3_buyCats extends reporter_jpetstore{
  @Test
  public void f() throws InterruptedException {
	  logger = extent.startTest("BuyCat");
	  WebDriver driver = new EdgeDriver();
	  driver.get("https://petstore.octoperf.com/");
	  driver.findElement(By.linkText("Enter the Store")).click();
	  driver.findElement(By.xpath("//img[@src='../images/cats_icon.gif']")).click();
	  driver.findElement(By.linkText("FL-DSH-01")).click();
	  WebElement heading = driver.findElement(By.tagName("h2"));
	  if(heading.getText().equals("Manx")) {
		  logger.log(LogStatus.PASS, "Manx cat is there");
	  }
	  else {
		  logger.log(LogStatus.FAIL, "Manx cat is not there");
	  }
	  driver.findElement(By.linkText("Add to Cart")).click();
	  driver.findElement(By.name("EST-14")).sendKeys(Keys.BACK_SPACE);
	  driver.findElement(By.name("EST-14")).sendKeys("10");
	  Thread.sleep(2000);
	  driver.quit();
  }
}
