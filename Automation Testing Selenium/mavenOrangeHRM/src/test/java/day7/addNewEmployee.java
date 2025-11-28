package day7;

import org.testng.annotations.Test;

import com.google.common.io.Files;
import com.relevantcodes.extentreports.LogStatus;

import org.testng.annotations.BeforeTest;

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

public class addNewEmployee extends reporter{
	static WebDriver driver;

  @Test
  public void f() throws IOException {
	  WebDriverWait wait = new WebDriverWait(driver,Duration.ofSeconds(30));
	  logger = extent.startTest("Number is username search field");
	  String userName="Admin";
	  String password = "admin123";
	  WebElement userNameField = wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//input[@placeholder=\"Username\"]")));
	  userNameField.sendKeys(userName);
	  WebElement passwordField = wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//input[@placeholder=\"Password\"]")));
	  passwordField.sendKeys(password);
	  WebElement login = driver.findElement(By.xpath("//button"));
	  login.click();
	  String firstname = "Hi";
	  String lastname = "Hello";
	  wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//a[@href=\"/web/index.php/pim/viewPimModule\"]"))).click();
	  wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//*[@id=\"app\"]/div[1]/div[2]/div[2]/div/div[2]/div[1]/button/i")));
	  wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//*[@id=\"app\"]/div[1]/div[2]/div[2]/div/div/form/div[1]/div[2]/div[1]/div[1]/div/div/div[2]/div[1]/div[2]/input"))).sendKeys(firstname);
	  wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//*[@id=\"app\"]/div[1]/div[2]/div[2]/div/div/form/div[1]/div[2]/div[1]/div[1]/div/div/div[2]/div[3]/div[2]/input"))).sendKeys(lastname);
	  WebElement empid = wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//*[@id=\"app\"]/div[1]/div[2]/div[2]/div/div/form/div[1]/div[2]/div[1]/div[2]/div/div/div[2]/input")));
	  empid.clear();
	  empid.sendKeys("139");
	  wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//*[@id=\"app\"]/div[1]/div[2]/div[2]/div/div/form/div[1]/div[2]/div[1]/div[2]/div/div/div[2]/input"))).clear();
	  wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//*[@id=\"app\"]/div[1]/div[2]/div[2]/div/div/form/div[1]/div[2]/div[1]/div[2]/div/div/div[2]/input"))).sendKeys("100");
	  wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//*[@id=\"app\"]/div[1]/div[2]/div[2]/div/div/form/div[2]/button[2]"))).click();
	  WebElement name = wait.until(ExpectedConditions.visibilityOfElementLocated(By.xpath("//*[@id=\"app\"]/div[1]/div[2]/div[2]/div/div/div/div[1]/div[1]/div[1]/h6")));
	  if((firstname+lastname).equals(name.getText())) {
		  logger.log(LogStatus.PASS, "Employee created");
	  }else {
		  logger.log(LogStatus.FAIL, "Employee not created");
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
		Files.copy(srcFile, new File("C:\\Selenium demo\\mavenOrangeHRM\\TestScreenshots\\screen12.jpeg"));
	}

}
