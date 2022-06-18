#include <iostream>

using namespace std;

class Pant;

class Cloths {
	string tagID;
	int Quantity; // new variable for keeping the track of quantity

public: 

	static double Revenue;
	static double Tax;
	
	virtual double Bill() {
		return 0.0;
	}

	void setTagID(string id) {
		tagID = id;
	}

	void setQuanity(int Quantity) {
		this->Quantity = Quantity;
	}

	int getQuantity() {
		return Quantity;
	}
};

double Cloths::Revenue = 0;
double Cloths::Tax = 0;

class Shirt : virtual public Cloths {
	string Design;
	double price;

public:
	static int stock;

	static int Stock() {
		return stock;
	}

	void setPrice(double price) {
		this->price = price;
	}

	void setDesign(int Quantity, string Design) {
		this->Design = Design;
		setPrice(Quantity * 1499);
	}

	double Bill() {
		return price;
	}

	string shirtDesign() {
		return Design;
	}

	double checkVoucher(string voucher) {

		if (voucher == "diner23") {
			price -= price * 0.23;
			return price;
		}
		return price;
	};

	Shirt() {};
	Shirt(string Design, int Quantity, string voucher) {

		setTagID("shrt1");
		setDesign(Quantity, Design);
		setPrice(checkVoucher(voucher));
		stock -= Quantity;
		Cloths::Revenue += Quantity * price;
		Cloths::Tax += 0.075 * Bill();

	}

	friend bool operator+ (const Pant& p);
	

};



int Shirt::stock = 50;

class Pant : virtual public Cloths {
	string Style;
	double price;

public:

	static int stock;
	static int Stock() {
		return stock;
	}

	void setPrice(double price) {
		this->price = price;
	}

	double getPrice() {
		return price;
	}

	void pantStyle(int Quantity, string Style) {
		this->Style = Style;

		if (Style == "BB") {
			setPrice(Quantity * 1199);
		}

		else if (Style == "SF") {
			setPrice(Quantity * 1499);
		}
		else if (Style == "NF") {
			setPrice(Quantity * 1999);
		}
		else {
			cout << "No Such Style" << endl;
			this->Style = "";
		}
	}

	double Bill() {
		return price;
	}



	Pant() {};
	Pant(const Pant& obj) {
		this->price = obj.price;
		this->Style = obj.Style;

	}
	Pant(string Style, int Quantity) {

		setTagID("pant1");
		pantStyle(Quantity,Style);
		stock -= Quantity;
		Cloths::Revenue += Quantity * price;
		Cloths::Tax += 0.045 * Bill();

	}
	
};

int Pant::stock = 50;


class Tie : virtual public Cloths {
	string Pattern;
	double price;

public:
	static int stock;

	static int Stock() {
		return stock;
	}

	void setPrice(double price) {
		this->price = price;
	}

	void tiePattern(int Quantity,string Pattern) {
		this->Pattern = Pattern;

		if (Pattern == "ST") {
			setPrice(Quantity * 699);
		}

		else if (Pattern == "CT") {
			setPrice(Quantity * 799);
		}
		else {
			cout << "No Such Pattern" << endl;
			this->Pattern = "";
		}
	}

	double Bill() {
		return price;
	}
	
	string getPattern() {
		return Pattern;

	}
	Tie() {};
	Tie(string Pattern, int Quantity) {
		setTagID("tie1");
		tiePattern(Quantity, Pattern);
		stock -= Quantity;
		Cloths::Revenue += Quantity * price;
	}
};

int Tie::stock = 50;


class Suit : public Shirt, public Pant, public Tie {
	double price;

public:
	
	void cal_Bill() {

		price = Shirt::Bill() + Pant::Bill() + Tie::Bill();
	}

	double Bill() {

		return price;
	}


	Suit() {};
	Suit(string Design, string Style, string Pattern) :Shirt(Design, 1, "NO"), Pant(Style, 1), Tie(Pattern, 1) {
		
		setTagID("Suit12");
		cal_Bill();
	}

};


int main() {


	Cloths* c; int option , quantity = 0; string voucher, option1, option2, option3;

	while (1) {

		system("pause");
		system("cls");

		cout << "Welcome To Dinners " << endl << endl;
		cout << "my name is Aisha and my employee-id(nu-id) is 21k-4592" << endl << endl;

		cout << "Menu: " << endl;
		cout << "[1] Shirts" << endl;
		cout << "[2] Pants" << endl;
		cout << "[3] Tie" << endl;
		cout << "[4] Suit" << endl;

		cin >> option;

		switch (option) {
			case 1: {
				cout << "Shirt Designs we have " << endl
					<< "[1] Formal, [2] Traditional, [3] Casual" << endl;
				cin >> option;

				cout << "How many shirts you want: ";
				cin >> quantity;

				cout << "Do you have any Discount Voucher(if no then write no)";
				cin >> voucher;

				switch (option) {
					case 1: {
						c = new Shirt("Formal", quantity, voucher);
						cout << "Total Bill: " << c->Bill() << endl;
						break;
					}
					case 2: {
						c = new Shirt("Traditional", quantity, voucher);
						cout << "Total Bill: " << c->Bill() << endl;
						break;
					}
					case 3: {
						c = new Shirt("Casual", quantity, voucher);
						cout << "Total Bill: " << c->Bill() << endl;
						break;
					}
				}
				break;
			}
			case 2: {
					cout << "Pant Styles we have " << endl
						<< "[1] Bell-Bottomed, [2]Straight Fit , [3] Narrow Fit" << endl;
					cin >> option;

					cout << "How many Pants you want: ";
					cin >> quantity;


					switch (option) {
						case 1: {
							c = new Pant("BB", quantity);
							cout << "Total Bill: " << c->Bill() << endl;
							break;
						}
						case 2: {
							c = new Pant("SF", quantity);
							cout << "Total Bill: " << c->Bill() << endl;
							break;
						}
						case 3: {
							c = new Pant("NF", quantity);
							cout << "Total Bill: " << c->Bill() << endl;
							break;
						}
					}
				break;

			}
			case 3: {
					cout << "Tie Patterns we have " << endl
						<< "[1] Striped Tie, [2] Checkerd Tie"  << endl;
					cin >> option;

					cout << "How many Ties you want: ";
					cin >> quantity;


					switch (option) {
						case 1: {
							c = new Tie("ST", quantity);
							cout << "Total Bill: " << c->Bill() << endl;
							break;
						}
						case 2: {
							c = new Tie("CT", quantity);
							cout << "Total Bill: " << c->Bill() << endl;
							break;
						}
				
					}
				break;

			}
			case 4: {
				cout << "Choose Shirt, Pant and Tie" << endl;

				cout << "Shirts Designs we have " << endl
					<< "[1] Formal, [2] Traditional, [3] Casual" << endl;
				cin >> option1;

				cout << "Pant Styles we have " << endl
					<< "[1] Bell-Bottomed(BB), [2]Straight Fit(SF) , [3] Narrow Fit(NF)" << endl << "Type Short Form" << endl;
				cin >> option2;

				cout << "Tie Patterns we have " << endl
					<< "[1] Striped Tie (ST), [2] Checkerd Tie (CT)" << endl << "Type Short Form" << endl;
				cin >> option3;

				c = new Suit(option1, option2, option3);
				cout << "Total Bill: " << c->Bill() << endl;
				break;
			}


		}
		cout << "Shirts stock: " << Shirt::Stock() << endl;
		cout << "Pants stock: " << Pant::Stock() << endl;
		cout << "Ties stock: " << Tie::Stock() << endl;
		cout << "Tax Calculated: " << c->Tax << endl;
		cout << "Revenue Generated: " << c->Revenue << endl;
	}

}