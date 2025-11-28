package day6;

import org.testng.annotations.Test;

public class tc4_dependsonMethods {
  @Test
  public void login() {
	  System.out.println("Login");
  }
  @Test(dependsOnMethods = {"login"})
  public void createOrder() {
	  System.out.println("Create order");
  }
  @Test(dependsOnMethods = {"createOrder"})
  public void updateOrder() {
	  System.out.println("Update order");
  }
  @Test(dependsOnMethods = {"updateOrder"})
  public void deleteOrder() {
	  System.out.println("Delete order");
  }
  @Test(dependsOnMethods = {"deleteOrder"})
  public void logout() {
	  System.out.println("Logout");
  }
}
