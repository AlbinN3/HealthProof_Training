package day5programs;


class testinggeneric <T>{
	T value;
	void setValue(T value) {
		this.value = value;
	}
	T getValue() {
		return value;
	}
}

public class p4generics {

	public static void main(String[] args) {
		testinggeneric obj = new testinggeneric();
		obj.setValue("Albin");
		System.out.println("Name "+obj.getValue());
		obj.setValue(40);
		System.out.println("Age "+obj.getValue());
	}

}
