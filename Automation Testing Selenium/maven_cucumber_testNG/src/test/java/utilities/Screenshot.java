package utilities;

import java.io.File;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;

import org.openqa.selenium.OutputType;
import org.openqa.selenium.TakesScreenshot;
import org.openqa.selenium.WebDriver;

import com.google.common.io.Files;

public class Screenshot {
//	String timestamp = new SimpleDateFormat("yyyyMMdd_HHmmss").format(new Date());
	WebDriver driver;
	public Screenshot(WebDriver driver) {
		this.driver = driver;
	}
	public void takeScreenshot(String fileName) throws IOException {
		System.out.println("Taking screenshot");
		File srcFile;
		srcFile=((TakesScreenshot)driver).getScreenshotAs(OutputType.FILE);
		Files.copy(srcFile, new File("C:\\Selenium demo\\maven_cucumber_testNG\\Screenshots\\"+fileName+"_.jpeg"));
	}
}
 