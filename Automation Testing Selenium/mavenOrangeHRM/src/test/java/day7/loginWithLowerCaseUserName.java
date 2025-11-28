package day7;

import org.testng.annotations.Test;

import com.google.common.io.Files;
import com.relevantcodes.extentreports.LogStatus;

import org.testng.annotations.BeforeTest;
import static org.testng.Assert.assertEquals;

import java.io.File;
import java.io.IOException;
import java.time.Duration;

import org.openqa.selenium.By;
import org.openqa.selenium.OutputType;
import org.openqa.selenium.TakesScreenshot;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;
import org.testng.annotations.AfterTest;

public class loginWithLowerCaseUserName extends reporter{
	static WebDriver driver;
  @Test
  public void f() throws IOException {
	  WebDriverWait wait = new WebDriverWait(driver,Duration.ofSeconds(30));
	  logger = extent.startTest("Lowercase username");
	  String userName="admin";
	  String password = "admin123";
	  WebElement userNameField = wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//input[@placeholder=\"Username\"]")));
	  userNameField.sendKeys(userName);
	  WebElement passwordField = wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//input[@placeholder=\"Password\"]")));
	  passwordField.sendKeys(password);
	  String currentUrl = driver.getCurrentUrl();
	  WebElement login = wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//button")));
	  login.click();
	  try {
		  assertEquals(currentUrl,driver.getCurrentUrl());
		  logger.log(LogStatus.PASS, "Login with lowercase username did not redirect to dashboard, test passed");
	  }catch(AssertionError e) {
		  logger.log(LogStatus.FAIL, "Login with lowercase username redirectyed to dashboard, test failed");
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
		Files.copy(srcFile, new File("C:\\Selenium demo\\mavenOrangeHRM\\TestScreenshots\\screenshot2.jpeg"));
	}

}
