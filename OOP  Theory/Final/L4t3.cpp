#include <iostream>

using namespace std;

class Hardware{
	int part_no, quantity;
	float price, invoice;
	string part_desp;
	
	public:
		Hardware();
		Hardware(int part_no, string part_desp, int quantity, float price){
			this->part_no = part_no;
			this->part_desp = part_desp;
			this->quantity = quantity;
			this->price = price;
			this->invoice = 0;
		}
		
		void show(){
			cout << part_no << endl;
			cout << part_desp << endl;
			cout << quantity << endl;
			cout << price << endl;
			cout << Invoice() << endl;
		}
		
		float Invoice(){
			return quantity * price;
		}
		
};

int main(){
	Hardware hd1(1003,"RAM", 45, 600);
	hd1.show();
}