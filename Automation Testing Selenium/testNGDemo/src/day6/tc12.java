package day6;

import org.testng.annotations.Test;

import com.relevantcodes.extentreports.LogStatus;

public class tc12 extends reporter {
	
  @Test
  public void f() {
	  logger = extent.startTest("Test1");
	  System.out.println("Test1 is running");
	  logger.log(LogStatus.PASS, "Test 1 is pass");
	  extent.endTest(logger);
  }
}
