package day3;

import java.io.File;
import java.io.IOException;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.edge.EdgeDriver;

import jxl.Cell;
import jxl.Sheet;
import jxl.Workbook;
import jxl.read.biff.BiffException;

public class p2_excelautomation {

	public static void main(String[] args) throws InterruptedException {
		// TODO Auto-generated method stub
		String excelFilePath = "C:\\Selenium demo\\data1.xls";
		Workbook workbook = null;
		try {
			File file = new File(excelFilePath);
			
			workbook=Workbook.getWorkbook(file);
			
			Sheet sheet = workbook.getSheet(0);
			
			int numRows = sheet.getRows();
			int numColumns = sheet.getColumns();
			for(int row=1;row<numRows;row++) {
				WebDriver driver = new EdgeDriver();
				driver.get("https://demowebshop.tricentis.com/");
				driver.findElement(By.linkText("Log in")).click();
				for(int col=0;col<numColumns;col++) {
					
					Cell cell = sheet.getCell(col,row);
					String cellContent = cell.getContents();
					if(col==0) {
						driver.findElement(By.id("Email")).sendKeys(cellContent);
					}
					if(col==1) {
						driver.findElement(By.id("Password")).sendKeys(cellContent);
					}
					Thread.sleep(2000);
				}
				driver.quit();
			}
		}catch(BiffException e) {
			System.err.println("Error reading excel file (BiffException) "+e.getMessage());
			e.printStackTrace();
		}catch(IOException e) {
			System.err.println("Error reading Excel file (IOException) "+e.getMessage() );
			e.printStackTrace();
		}finally {
			if(workbook!=null) {
				workbook.close();
			}
		}
	}

}
