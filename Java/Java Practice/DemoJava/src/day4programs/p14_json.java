package day4programs;

import java.io.FileReader;

import org.json.simple.JSONArray;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;

public class p14_json {
	public static void main(String[] args) {
		JSONParser parser = new JSONParser();
		try {
			FileReader reader = new FileReader("C:\\Java Practice\\DemoJava\\src\\day4programs\\testdata.json");
			Object obj = parser.parse(reader);
			JSONObject jsonObject = (JSONObject) obj;
			String name = (String) jsonObject.get("name");
			Long age = (Long) jsonObject.get("age");
			Boolean isStudent = (Boolean) jsonObject.get("isStudent");
			JSONArray courses = (JSONArray) jsonObject.get("courses");
			
			System.out.println("Name"+name);
			System.out.println("Age"+age);
			System.out.println("Is student"+isStudent);
			System.out.println("Courses"+courses);
			for(Object course: courses) {
				System.out.println("-"+course);
			}
			
		}catch(Exception e) {
			e.printStackTrace();
		}
	}
}
