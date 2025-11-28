package day1;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

public class p2_chromeTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver;
		driver = new EdgeDriver();
		String s;
		driver.get("http://www.google.co.in");
		s=driver.getTitle();
		System.out.println(s);
		driver.quit();
	}

}
