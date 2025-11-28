package day7;

import static org.testng.Assert.assertTrue;

import org.testng.annotations.Test;

import com.relevantcodes.extentreports.LogStatus;

public class tc2 extends reporter{
  @Test
  public void f() {
	  logger = extent.startTest("Test 2");
	  logger.log(LogStatus.PASS, "Test2 is pass");
	  assertTrue(true);
  }
}
