package day5;

import org.openqa.selenium.htmlunit.HtmlUnitDriver;

public class p1_headlessbrowser {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		HtmlUnitDriver driver = new HtmlUnitDriver();
		driver.get("https://demowebshop.tricentis.com/");
		String s = driver.getTitle();
		System.out.println(s);
		driver.quit();
	}

}
