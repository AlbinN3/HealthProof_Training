package day6;

import org.testng.annotations.Test;

public class testTwo {
  @Test
  public void f() throws InterruptedException {
	  int i;
	  for(i=0;i<=50;i++) {
		  System.out.println("j= "+i);
		  Thread.sleep(2000);
	  }
  }
}
