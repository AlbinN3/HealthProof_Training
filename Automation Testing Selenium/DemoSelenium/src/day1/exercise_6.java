package day1;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.edge.EdgeDriver;
import org.openqa.selenium.interactions.Actions;
import org.openqa.selenium.support.ui.Select;

public class exercise_6 {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		WebDriver driver = new EdgeDriver();
		driver.get("https://demowebshop.tricentis.com/");
		WebElement computers = driver.findElement(By.linkText("COMPUTERS"));
		Actions actions = new Actions(driver);
		actions.moveToElement(computers).build().perform();
		WebElement notebook = driver.findElement(By.linkText("Notebooks"));
		notebook.click();
		int expValue=6;
		Select sortby=new Select(driver.findElement(By.id("products-orderby")));
		int actValue=sortby.getOptions().size();
		System.out.println(actValue);
		if(actValue == expValue) {
			System.out.println("Values are same");
		}
		else{
			System.out.println("Values are different");
		}
		for(int i = 0;i<actValue;i++) {
			Select sortby2=new Select(driver.findElement(By.id("products-orderby")));
			sortby2.selectByIndex(i);
			Thread.sleep(2000);
		}
		driver.quit();
	}

}
