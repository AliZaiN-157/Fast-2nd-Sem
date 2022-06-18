#include <iostream>

using namespace std;

class Gift{
protected:
	string catID;
	float price; // price per item
	int Quantity; // number of items
	float total_Bill; // price per item * number of items
	bool taxApplicable;

public:

	static float revenue;
	static float tax;

	Gift() {};
	Gift(string catID){
		set_catID(catID);
	}
	Gift(string catID, float price, int Quantity){
		
		set_catID(catID);
		setPrice(price);
		setQuantity(Quantity);
	}

	void setQuantity(int Quantity){
		this->Quantity = Quantity;
	}

	int getQuantity() {
		return Quantity;
	}

	void create_Bill() {
		total_Bill = price * Quantity;
	}
	
	float Bill() {
		return total_Bill;
	}

	void setPrice(float price) {
		this->price = price;
	}

	float getPrice() {
		return price;
	}

	void set_catID(string id) {
		catID = id;
	}

	string get_catID() {
		return catID;
	}
};

float Gift::revenue = 0;
float Gift::tax = 0;


class Flowers : virtual public Gift {

	string FloralType;
	static int stock;

public:


	Flowers();
	Flowers(const Flowers& flower) {
		this->catID = flower.catID;
		this->FloralType = flower.FloralType;
		this->price= flower.price;
		this->Quantity = flower.Quantity;
		this->total_Bill = flower.total_Bill;
	}
	Flowers(string FloralType, int Quantity):Gift("FL1",50, Quantity),FloralType(FloralType) {

		create_Bill();
		Gift::revenue += Bill();
		Flowers::stock -= getQuantity();

	};

	void set_FloralType(string FloralType) {
		this->FloralType = FloralType;
	}

	string get_FloralType() {
		return FloralType;
	}

};

int Flowers::stock = 10;

class Perfume: virtual public Gift {

	string brand;
	static int stock;

public:

	void setBrand(string brand) {
		this->brand = brand;
		if (brand == "GUCCI") {
			setPrice(1200);
		}
		else if (brand == "VERSACE") {
			setPrice(1100);
		}
		else if (brand == "CHANEL") {
			setPrice(950);
		}
		else {
			this->brand = "";
		}

	}

	string getBrand() {
		return brand;
	}

	Perfume() {};
	Perfume(string brand, int Quantity){

		set_catID("PF1");
		setBrand(brand);
		setQuantity(Quantity);
		create_Bill();
		Gift::revenue += Bill();
		Gift::tax += Bill() * 0.07;
		Perfume::stock -= getQuantity();

	}
};

int Perfume::stock = 10;


class ChocolateCake: virtual public Gift {

	int weight;
	string msg_on_cake;
	static int stock;
	
public:

	void set_msg(string msg) {
		msg_on_cake = msg;
	}

	string get_msg() {
		return msg_on_cake;
	}

	void set_weight(int weight) {
		this->weight = weight;
	}

	void setPrice(int weight, float price) {
		this->price = weight * price;
	}
	
	float getPrice() {
		return price;
	}
	
	void setQuantity(int Quantity) {
		this->Quantity = Quantity;
	}
	
	int getQuantity() {
		return Quantity;
	}
	
	ChocolateCake() {};

	ChocolateCake(int weight, string msg_on_cake, int Quantity){

		set_catID("CC1");
		set_msg(msg_on_cake);
		setQuantity(Quantity);
		create_Bill();
		setPrice(weight, 700);
		Gift::revenue += Bill();
		Gift::tax += Bill() * 0.04;
		ChocolateCake::stock -= getQuantity();
	}
	
};

int ChocolateCake::stock = 10;

class HappyBundle :public ChocolateCake, public Flowers, public Perfume {
	
private:
	bool CC = false, FW = false, PM= false;
	
public:

	HappyBundle(){}

	HappyBundle(string brand, string FLoralType, int weight, string msg_on_cake) :ChocolateCake(weight, msg_on_cake, 1), Perfume(brand, 1), Flowers(FLoralType, 1) {
		set_catID("HB1");
		CC = true;
		FW = true;
		PM = true;
		
	}

	HappyBundle(string brand, string FloralType) : Perfume(brand, 1), Flowers(FloralType,1) {
		set_catID("HB2");
		FW = true;
		PM = true;
	}

	HappyBundle(string brand, int weight, string msg_on_cake) : Perfume(brand, 1), ChocolateCake(weight, msg_on_cake, 1){
		set_catID("HB3");
		CC = true;
		PM = true;
		
	}

	HappyBundle(int weight, string msg_on_cake, string FloralType) : Flowers(FloralType, 1), ChocolateCake(weight, msg_on_cake, 1) {
		set_catID("HB4");
		FW = true;
		CC = true;
		
	};

	int Bill() {
		if (CC && FW && PM) {
			return Perfume::Bill() + Flowers::Bill() + ChocolateCake::Bill();
		}
		
		else if (CC && FW) {
			return Perfume::Bill() + Flowers::Bill();
		}
		
		else if (CC && PM) {
			return Perfume::Bill() + ChocolateCake::Bill();
		}
		
		else{
			return Flowers::Bill() + ChocolateCake::Bill();
		}
		
	}

	friend bool operator> (const HappyBundle& HB1, const HappyBundle& HB2);
	
};

bool operator > (const HappyBundle& HB1, const HappyBundle& HB2) {
	return HB1.price > HB2.price;
}

class NineTails {
	string contact, address, email;
	float tax, revenue;

public:

	NineTails(){}
	NineTails(string contact, string address, string email) : contact(contact), email(email), address(address) {
		tax = Gift::tax;
		revenue = Gift::revenue;
	}

	friend class TaxationDepartment;
};

class TaxationDepartment {

	float tax, revenue;
	NineTails* order = new NineTails("+44-62517171","abc street", "abc.gmail.com");

public:
	void set_tax_revenue(NineTails& a) {
		tax = a.tax;
		revenue = a.revenue;
	}

	void show_tax_revenue() {
		cout << "Tax: " << tax << endl;
		cout << "Revenue: " << revenue << endl;
	}
};

int main() {

	Gift* present = new Perfume("VERSACE", 2);
	cout << "Perfume: " << present->Bill();
}