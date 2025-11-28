package day6;

import org.testng.annotations.Test;
import org.testng.annotations.DataProvider;

public class tc7_dataProvider {
  @Test(dataProvider = "dp")
  public void f(String username, String password) {
	  System.out.println("Username "+username);
	  System.out.println("Password "+password);
  }

  @DataProvider
  public Object[][] dp() {
    return new Object[][] {
      new Object[] { "username1", "password1" },
      new Object[] { "username2", "password2" },
      new Object[] { "username3", "password3" },
    };
  }
}
