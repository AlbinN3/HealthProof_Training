package day2;

import java.io.File;
import java.io.IOException;

import org.openqa.selenium.By;
import org.openqa.selenium.OutputType;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

import com.google.common.io.Files;

public class p12_screenshot {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/");
		WebElement register = driver.findElement(By.linkText("Register"));
		File registerimg = register.getScreenshotAs(OutputType.FILE);
		File destinationimg = new File("C:\\Users\\Administrator\\Downloads\\Test_results\\register.jpeg");
		Files.copy(registerimg, destinationimg);
		driver.quit();
	}

}
