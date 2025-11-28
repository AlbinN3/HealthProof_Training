package stepdefenition;

import io.cucumber.java.After;
import io.cucumber.java.Before;

public class hooks {
	@Before
	public void h1() {
		System.out.println("Before");
	}
	@After
	public void h2() {
		System.out.println("After");
	}
}
