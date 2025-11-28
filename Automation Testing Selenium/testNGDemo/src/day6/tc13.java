package day6;

import org.testng.annotations.Test;

import com.relevantcodes.extentreports.LogStatus;

public class tc13 extends reporter{
  @Test
  public void f() {
	  logger = extent.startTest("Test2");
	  System.out.println("Test2 is running");
	  logger.log(LogStatus.PASS, "Test 2 is pass");
	  extent.endTest(logger);
  }
}
