package day3programs;

interface customer{
	int a=10;
	static final int b=10;
	public void deposit();
}
interface transaction{
	public void withdraw();
}
class bank implements customer,transaction{

	@Override
	public void withdraw() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void deposit() {
		// TODO Auto-generated method stub
		
	}
	
}

public class p10_interface {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
