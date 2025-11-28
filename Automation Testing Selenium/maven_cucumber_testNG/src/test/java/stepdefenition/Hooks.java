package stepdefenition;

import java.time.Duration;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import io.cucumber.java.After;
import io.cucumber.java.Before;

public class Hooks {
	private static WebDriver driver;
	
	@Before
	public void init() {
		driver = new EdgeDriver();
		driver.manage().timeouts().implicitlyWait(Duration.ofSeconds(120));
	}
	public static WebDriver getDriver() {
		return driver;
	}
	
	@After
	public void stop() {
		driver.quit();
	}
}