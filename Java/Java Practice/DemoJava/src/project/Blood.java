package project;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;



public class Blood {
	Blood(){
		validBlood.add("A+");
		validBlood.add("A-");
		validBlood.add("B+");
		validBlood.add("B-");
		validBlood.add("AB+");
		validBlood.add("AB-");
		validBlood.add("O+");
		validBlood.add("O-");
	}
	public HashMap<String,Integer> blood = new HashMap<>();
	public List<String> validBlood= new ArrayList<String>();
}
