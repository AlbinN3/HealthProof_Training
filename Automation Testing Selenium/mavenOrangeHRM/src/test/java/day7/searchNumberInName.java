package day7;

import org.testng.annotations.Test;

import com.google.common.io.Files;
import com.relevantcodes.extentreports.LogStatus;

import org.testng.annotations.BeforeTest;

import static org.testng.Assert.assertEquals;
import static org.testng.Assert.assertTrue;

import java.io.File;
import java.io.IOException;
import java.time.Duration;
import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.OutputType;
import org.openqa.selenium.TakesScreenshot;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;
import org.testng.annotations.AfterTest;

public class searchNumberInName extends reporter{
	static WebDriver driver;
  @Test
  public void f() throws IOException {
	  WebDriverWait wait = new WebDriverWait(driver,Duration.ofSeconds(30));
	  logger = extent.startTest("Number in username check");
	  String userName="Admin";
	  String password = "admin123";
	  WebElement userNameField = wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//input[@placeholder=\"Username\"]")));
	  userNameField.sendKeys(userName);
	  WebElement passwordField = wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//input[@placeholder=\"Password\"]")));
	  passwordField.sendKeys(password);
	  WebElement login = driver.findElement(By.xpath("//button"));
	  login.click();
	  wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//a[@href=\"/web/index.php/admin/viewAdminModule\"]"))).click();
	  wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//*[@id=\"app\"]/div[1]/div[2]/div[2]/div/div[1]/div[2]/form/div[1]/div/div[1]/div/div[2]/input"))).sendKeys("123");
	  List<WebElement> checker = driver.findElements(By.xpath("//span[@class=\"oxd-text oxd-text--span oxd-input-field-error-message oxd-input-group__message\"]"));
	  try {
		  assertTrue(checker.size()>0);
		  logger.log(LogStatus.PASS, "The username field in admin page is not accepting numeric values,test passed");
	  }catch(AssertionError e) {
		  logger.log(LogStatus.FAIL, "The username field in admin page is accepting numeric values,test failed");
		  takeScreenshot();
	  }
  }
  @BeforeTest
  public void beforeTest() {
	  driver = new EdgeDriver();
	  driver.get("https://opensource-demo.orangehrmlive.com/web/index.php/auth/login");
  }

  @AfterTest
  public void afterTest() {
	  driver.quit();
  }
  static void takeScreenshot() throws IOException {
		System.out.println("Taking screenshot");
		File srcFile;
		srcFile=((TakesScreenshot)driver).getScreenshotAs(OutputType.FILE);
		Files.copy(srcFile, new File("C:\\Selenium demo\\mavenOrangeHRM\\TestScreenshots\\screenshot4.jpeg"));
	}

}
