package day1;

import org.jspecify.annotations.Nullable;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;

public class exercise_1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://advantageonlineshopping.com/");
		String expTitle = "Advantage Shopping";
		String actTitle = driver.getTitle();
		actTitle=actTitle.replace("\u00a0","");
		if(expTitle.equals(actTitle)) {
			System.out.println("Title is same");
		}
		else {
			System.out.println("Title is different");
		}
		System.out.println(actTitle);
		driver.quit();
	}

}
