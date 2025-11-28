package day6;

import static org.testng.Assert.assertTrue;

import org.testng.annotations.AfterTest;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.Test;

import com.relevantcodes.extentreports.ExtentReports;
import com.relevantcodes.extentreports.ExtentTest;
import com.relevantcodes.extentreports.LogStatus;

public class tc11_extentreports {
	ExtentReports extent;
	ExtentTest logger;
  @Test
  public void tc1() {
	  logger = extent.startTest("test1");
	  assertTrue(true);
	  System.out.println("test1 is running");
	  logger.log(LogStatus.PASS, "Test is pass");
	  extent.endTest(logger);
  }
  @Test
  public void tc2() {
	  logger = extent.startTest("test2");
	  assertTrue(true);//false will fail
	  System.out.println("test2 is running");
	  logger.log(LogStatus.PASS, "Test is pass");
	  extent.endTest(logger);
  }
  @BeforeTest
  public void startTest() {
	  extent = new ExtentReports("C:\\Selenium demo\\testNGDemo\\testresults.html",true);
  }
  @AfterTest
  public void endTest() {
	  extent.flush();
	  extent.close();
  }
}
