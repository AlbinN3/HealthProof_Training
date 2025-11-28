package day3;

import java.io.File;
import java.io.IOException;

import jxl.Cell;
import jxl.Sheet;
import jxl.Workbook;
import jxl.read.biff.BiffException;

public class p1_readexcel {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String excelFilePath = "C:\\Selenium demo\\data1.xls";
		Workbook workbook = null;
		try {
			File file = new File(excelFilePath);
			
			workbook=Workbook.getWorkbook(file);
			
			Sheet sheet = workbook.getSheet(0);
			
			int numRows = sheet.getRows();
			int numColumns = sheet.getColumns();
			System.out.println("Reading excel file: "+excelFilePath);
			System.out.println("Number of rows: "+numRows);
			System.out.println("Number of columns: "+numColumns);
			for(int row=0;row<numRows;row++) {
				for(int col=0;col<numColumns;col++) {
					Cell cell = sheet.getCell(col,row);
					String cellContent = cell.getContents();
					System.out.print(cellContent+"\t");
				}
				System.out.println();
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
