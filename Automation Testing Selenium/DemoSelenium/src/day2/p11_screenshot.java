package day2;

import java.io.File;
import java.io.IOException;

import org.openqa.selenium.*;
import org.openqa.selenium.OutputType;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import com.google.common.io.Files;

public class p11_screenshot {

	static WebDriver driver;
	static int i=1;
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/");
		takeScreenshot();
		driver.findElement(By.linkText("Register")).click();
		takeScreenshot();
		driver.findElement(By.id("FirstName")).sendKeys("ALbin");
		takeScreenshot();
		driver.findElement(By.id("LastName")).sendKeys("N");
		takeScreenshot();
		Thread.sleep(4000);
		
		driver.quit();
	}
	static void takeScreenshot() throws IOException {
		System.out.println("Taking screenshot");
		File srcFile;
		srcFile=((TakesScreenshot)driver).getScreenshotAs(OutputType.FILE);
		Files.copy(srcFile, new File("C:\\Users\\Administrator\\Downloads\\Test_results\\"+i+ ".jpeg"));
		i++;
	}
}
