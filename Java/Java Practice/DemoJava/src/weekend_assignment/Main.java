package weekend_assignment;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


class Inventory{
	private Integer itemId;
	private String itemName;
	private Integer itemQuantity;
	
	Inventory(int itemId, String itemName, int itemQuantity){
		this.itemId = itemId;
		this.itemName = itemName;
		this.itemQuantity = itemQuantity;
	}
	
	public String getItemName() {
		return itemName;
	}
	public Integer getItemQuantity() {
		return itemQuantity;
	}
	public Integer getItemId() {
		return itemId;
	}
	public void setItemQuantity(int itemQuantity) {
		this.itemQuantity = itemQuantity;
	}
	@Override
	public String toString(){
		return "Item id "+itemId+" Item Name "+itemName+" Item Quantity "+itemQuantity;
	}
}

public class Main{
		
	public static void main(String[] args) {
		int ch;
		Scanner sc = new Scanner(System.in);
		List <Inventory> inventoryObject = new ArrayList <> ();
		do {
			System.out.println("Enter Choice");
			System.out.println("1.Add item to Store");
			System.out.println("2.View item in Store");
			System.out.println("3.Issue item from Store");
			System.out.println("4.Remove item from Store");
			System.out.println("5.Exit");
			ch = sc.nextInt();
			switch(ch) {
				case 1:	Inventory invObject = addItem();
						if(invObject == null) {
							System.out.println("Quantity must be between 5 and hundred");
						}
						else {
							inventoryObject.add(invObject);
						}
						break;
				case 2:	for(Inventory in:inventoryObject ) {
							System.out.println(in);
						}
						break;
				case 3:	issueItem(inventoryObject); 
						break;
				case 4: boolean removed = removeItem(inventoryObject);
						if(removed) {
							System.out.println("Item removed successfully");
						}
						else {
							System.out.println("Please give a valid id");
						}
						break;
				case 5:	break;
			}
		}while(ch!=5);
	}
	public static Inventory addItem() {
		Scanner sc = new Scanner(System.in);
		int itemId,itemQuantity;
		String itemName;
		System.out.println("Enter the item Id:");
		itemId = sc.nextInt();
		System.out.println("Enter the item Name:");
		itemName = sc.next();
		System.out.println("Enter the item Quantity:");
		itemQuantity = sc.nextInt();
		if(validateQuantity(itemQuantity)) {
			Inventory inventoryObject = new Inventory(itemId,itemName,itemQuantity);
			return inventoryObject;
		}
		else {
			return null;
		}
	}
	public static boolean removeItem(List<Inventory> inventoryObject) {
		int itemId;
		Scanner sc = new Scanner(System.in);
		Inventory toRemove=null;
		System.out.println("Enter the item id");
		itemId=sc.nextInt();
		for(Inventory in: inventoryObject) {
			if(in.getItemId().equals(itemId)) {
				toRemove = in;
				break;
			}
		}
		if(toRemove==null) {
			return false;
		}
		else {
			inventoryObject.remove(toRemove);
			return true;
		}
	}
	public static void issueItem(List<Inventory> inventoryObject) {
		int itemId, itemQuantity;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter item id to issue");
		itemId = sc.nextInt();
		System.out.println("Enter quantity to be issued");
		itemQuantity = sc.nextInt();
		Inventory removeItem = null;
		for(Inventory in:inventoryObject) {
			if(in.getItemId().equals(itemId)) {
				removeItem=in;
				break;
			}
		}
		if(removeItem==null) {
			System.out.println("Enter a valid id");
		}
		else {
			int quantity = removeItem.getItemQuantity()-itemQuantity;
			if(validateQuantity(quantity)) {
				removeItem.setItemQuantity(quantity);
				System.out.println("Quantity issued successfully");
			}
			else {
				System.out.println("Quantity cannot be issued, minimum quantity has to be maintained");
			}
		}
	}
	
	public static boolean validateQuantity(int itemQuantity) {
		if(itemQuantity<5 || itemQuantity>100) {
			return false;
		}
		else {
			return true;
		}
	}
}
