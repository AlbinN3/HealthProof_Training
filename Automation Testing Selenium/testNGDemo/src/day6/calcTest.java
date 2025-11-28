package day6;

import static org.testng.Assert.assertEquals;

import org.testng.annotations.Test;

public class calcTest {

  @Test
  public void addNumbersTest() {
	  int a=2, b=3, expout=5, actout;
	  calc obj = new calc();
	  actout = obj.addNumbers(a, b);
	  assertEquals(actout, expout);
  }
}
