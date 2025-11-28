package day6;

import static org.testng.Assert.assertEquals;

import org.testng.annotations.Test;

public class stringUtitlityTest {

  @Test
  public void findLengthTest() {
	  stringUtility obj = new stringUtility();
	  int actout = obj.findLength("java");
	  int expout=4;
	  assertEquals(actout,expout);
	  actout = obj.findLength("selenium");
	  expout=8;
	  assertEquals(actout,expout);
	  actout = obj.findLength("jmeter");
	  expout=4;
	  assertEquals(actout,expout);
  }
}
