import org.junit.runner.RunWith;

import io.cucumber.junit.Cucumber;
import io.cucumber.junit.CucumberOptions;

@RunWith(Cucumber.class)
@CucumberOptions(features="feature",glue= {"stepdefenition"},tags = "@multiplelogin")
public class testrunner {

}
