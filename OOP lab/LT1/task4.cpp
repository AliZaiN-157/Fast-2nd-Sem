#include <iostream>
#include <iomanip>
using namespace std;

struct StoreHouseItem{
	
	string itemName;
	int itemQuantity;
	
} items[5];

int main(){
	
	for(int i = 0; i < 3; i++){
		
		cout << "Enter item Name: " << endl;
		cin >> items[i].itemName;
		
		cout << "Enter item Quantity: " << endl;
		cin >> items[i].itemQuantity;
		
		cout << endl;
	}
	
	for(int i = 0; i < 3; i++){
		
		cout << left << setw(15) << "Item Name" << right << setw(10) << "Quantity" << endl;
		cout << left << setw(15) << items[i].itemName << right << setw(10) << items[i].itemQuantity << endl;
		cout << endl;
	}
	
	
}
