package day6;

import org.testng.annotations.Test;

public class tc3_priority {
  @Test(priority=1)
  public void login() {
	  System.out.println("Login");
  }
  @Test(priority=2)
  public void createOrder() {
	  System.out.println("Creating order");
  }
  @Test(priority=3)
  public void logout() {
	  System.out.println("Logout");
  }
}
