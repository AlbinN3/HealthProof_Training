package day7;

import org.testng.annotations.Test;

import com.relevantcodes.extentreports.LogStatus;

import org.testng.annotations.BeforeTest;

import static org.testng.Assert.assertTrue;

import org.testng.annotations.AfterTest;

public class tc1 extends reporter{
  @Test
  public void f() {
	  logger = extent.startTest("Test1");
	  System.out.println("Test 1 is running");
	  logger.log(LogStatus.PASS, "test1 is pass");
	  assertTrue(true);
  }
  

}
