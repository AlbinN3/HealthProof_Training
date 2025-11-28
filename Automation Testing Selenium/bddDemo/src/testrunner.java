import org.junit.runner.RunWith;

import io.cucumber.junit.Cucumber;
import io.cucumber.junit.CucumberOptions;

@RunWith(Cucumber.class)
@CucumberOptions(features="features",glue= {"stepdefenition"},tags ="@smoketesting",plugin = {"pretty","html:target/cucumber-reports.html"}, monochrome =true)
public class testrunner {
	
}
/*
plugin = { "pretty" },
monochrome = true)

plugin = { "usage" },
	monochrome = true


plugin = { "pretty", "html:target/cucumber-reports" },
monochrome = true)

plugin = { "pretty", "json:target/cucumber-reports/Cucumber.json" },
	monochrome = true

plugin = { "pretty", "junit:target/cucumber-reports/Cucumber.xml" },
	monochrome = true
*/

/*
 WebDriver driver;
		driver = new EdgeDriver();
        driver.get(
            "https://jqueryui.com/resources/demos/droppable/default.html");

        // Navigate to URL
        Thread.sleep(3000);
        
            Actions action = new Actions(driver);
            WebElement drag
                = driver.findElement(By.id("draggable"));
            WebElement drop
                = driver.findElement(By.id("droppable"));

            action.dragAndDrop(drag, drop)
                .build()
                .perform();

            Thread.sleep(3000);
       
        driver.close();
		// TODO Auto-generated method stub

 */
