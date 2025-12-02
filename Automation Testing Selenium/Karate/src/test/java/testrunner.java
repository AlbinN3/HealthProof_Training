import org.junit.runner.RunWith;
import com.intuit.karate.junit4.Karate;

import io.cucumber.junit.CucumberOptions;

@RunWith(Karate.class)
@CucumberOptions(glue= {"stepdefenition"},tags="@test")
public class testrunner {

}
