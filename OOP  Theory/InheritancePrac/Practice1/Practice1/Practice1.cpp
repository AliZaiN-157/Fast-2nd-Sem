#include<iostream>
#include<cstring>

using namespace std;

class Medicine {
protected:
	string Name;
	string Formula;
	float price;
	string m_date;
	string ex_date;

};

class Syrup : public Medicine {

public:
	Syrup() {};

	void addSyrup(string Name, string Formula, float price, string m_date, string ex_date) {
		this->Name = Name;
		this->Formula = Formula;
		this->price = price;
		this->m_date = m_date;
		this->ex_date = ex_date;
	}

	void showSyrup() {
		cout << "Name: " << Name << endl;
		cout << "Formula: " << Formula << endl;
		cout << "price: " << price << endl;
		cout << "m_date: " << m_date << endl;
		cout << "ex_date: " << ex_date << endl;
	}
};

class Tablet :public Medicine {
private:
	float sucrose_level;

public:
	Tablet() {};

	void addTablet(string Name, string Formula, float price, string m_date, string ex_date, float sucrose_level) {
		this->Name = Name;
		this->Formula = Formula;
		this->price = price;
		this->m_date = m_date;
		this->ex_date = ex_date;
		this->sucrose_level = sucrose_level;
	}

	void showTablet() {
		cout << "Name: " << Name << endl;
		cout << "Formula: " << Formula << endl;
		cout << "price: " << price << endl;
		cout << "m_date: " << m_date << endl;
		cout << "ex_date: " << ex_date << endl;
		cout << "sucrose_level: " << sucrose_level << endl;
	}
};

int main() {
	Syrup s1;
	s1.addSyrup("Calpol", "H20", 60.0, "16 - 05 - 2022", "25 - 12 - 2022");
	s1.showSyrup();

	Tablet t1;
	t1.addTablet("Panadol", "IDK", 12.0, "16 - 05 - 2022", "25 - 12 - 2022", 22.5);
	t1.showTablet();
}