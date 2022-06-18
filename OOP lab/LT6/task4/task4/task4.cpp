#include<iostream>
#include<string>

using namespace std;

class Item {
protected:
	string Name;
	double Quantity;

public:

	void setName(string Name) {
		this->Name = Name;
	}

	void setQuantity(double Quantity) {
		this->Quantity = Quantity;
	}

	string getName() {
		return Name;
	}

	double getQuantity() {
		return Quantity;
	}
};

class BakedGood : public Item {
protected:
	double Discount = 0.1;
};

class Cake : public BakedGood {

	double price = 600;

public:

	void Bill() {
		double cal;
		cal = price * Quantity * Discount;
		cout << "Your Bill: " << cal << endl;
	}
};

class Bread : public BakedGood {
	double price = 200;

public:
	void Bill() {
		double cal;
		cal = price * Quantity * Discount;
		cout << "Your Bill: " << cal << endl;
	}
};

class Drinks : public Item {
	double Discount = 0.05;
	double price = 100;
public:
	void Bill() {
		double cal;
		cal = price * Discount * Quantity;
		cout << "Your Bill: " << cal << endl;
	}

};

int main() {

	int options;  float amount;
	cout << "Welcome to Fast Bakery ...." << endl;
	
	cout << "1. Cake" << endl << "2. Bread" << endl << "3. Drinks" << endl;
	cin >> options;

	switch (options) {
		case 1: {
			Cake c1;
			cout << "How many Cakes you want ?";
			cin >> amount;
			c1.setQuantity(amount);
			c1.Bill();
			break;
		}
		
		case 2: {
			Bread b1;
			cout << "How many Bread you want ? ";
			cin >> amount;
			b1.setQuantity(amount);
			b1.Bill();
			break;
		}

		case 3: {
			Drinks d1;
			cout << "How many Dronks you want ? ";
			cin >> amount;
			d1.setQuantity(amount);
			d1.Bill();
			break;
		}
	}

}
