#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class Syrup{

	string Name;
	string Formula;
	float price;
	string m_date;
	string ex_date;

	public:
		void addSyrup(string Name, string Formula, float price, string m_date, string ex_date){
			this->Name = Name;
			this->Formula = Formula;
			this->price = price;
			this->m_date = m_date;
			this->ex_date = ex_date;
		}

		bool search_Medicine(string name){
			return true;
		}

		bool search_Medicine_by_name(string name){
			return true;
		}
};

class Tablet{

	string Name;
	string Formula;
	float price;
	string m_date;
	string ex_date;
	float sucrose_level;

	public:
		void addTablet(string Name, string Formula, float price, string m_date, string ex_date, float sucrose_level){
			this->Name = Name;
			this->Formula = Formula;
			this->price = price;
			this->m_date = m_date;
			this->ex_date = ex_date;
			this->sucrose_level = sucrose_level;
		}

		bool search_Medicine(string name){
			return true;
		}

		bool search_Medicine_by_name(string name){
			return true;
		}

};

class Capsule{
	string Name;
	string Formula;
	float price;
	string m_date;
	string ex_date;
	float abs_perc;

	public:
		void addCapsule(string Name, string Formula, float price, string m_date, string ex_date, float abs_perc){
			this->Name = Name;
			this->Formula = Formula;
			this->price = price;
			this->m_date = m_date;
			this->ex_date = ex_date;
			this->abs_perc = abs_perc;
		}

		bool search_Medicine(string name){
			return true;
		}

		bool search_Medicine_by_name(string name){
			return true;
		}
};

class Pharmacist{
	string Name;

	public:
		Pharmacist(string Name):Name(Name){
		};

		string receive_prescription(string prescription){

			int type;

			cout << "Enter Medicine Type: " << endl;
			cout << "1. Syrup" << endl;
			cout << "2. Tablet" << endl;
			cout << "3. Capsule" << endl;
			cin >> type;

			switch(type){
				case 1:
					{
						Syrup s1;
						if(s1.search_Medicine(prescription)){
							cout << "Cough Syrup" << endl;
						}
						break;
					}
				case 2:
					{
						Tablet t1;
						if(t1.search_Medicine(prescription)){
							cout << "Panadol Tablet" << endl;
						}
						break;
					}
				case 3:
					{
						Capsule c1;
						if(c1.search_Medicine(prescription)){
							cout << "Colorful Capsule" << endl;
						}
						break;
					}
			}

			return "Yes";


		}

};

class Cstaff{

	string Name;
	Pharmacist * ph;

	public:
		Cstaff(string Name) : Name(Name){

			ph  = new Pharmacist("Zain");
		};

		string take_prescription(string prescription){
			int type; bool check = false;

			cout << "Enter Medicine Type: " << endl;
			cout << "1. Syrup" << endl;
			cout << "2. Tablet" << endl;
			cout << "3. Capsule" << endl;
			cin >> type;

			switch(type){
				case 1:
					{
						Syrup s1;
						if(s1.search_Medicine_by_name(prescription)){
							check = true;
							cout << "Yes. We have this Syrup" << endl;
						}
						else{
							cout << "Sorry. This Syrup is not in stock" << endl;
						}
						break;
					}
				case 2:
					{
						Tablet t1;
						if(t1.search_Medicine_by_name(prescription)){
							check = true;
							cout << "Yes. We have this Tablet" << endl;
						}
						else{
							cout << "Sorry. This Tablet is not in stock" << endl;
						}
						break;
					}
				case 3:
					{
						Capsule c1;
						if(c1.search_Medicine_by_name(prescription)){
							check = true;
							cout << "Yes. We have this Capsule" << endl;
						}
						else{
							cout << "Sorry. This Capsule is not in stock" << endl;
						}
						break;
					}
			}

			if (check){
				string response;

				response = ph->receive_prescription(prescription);
				return response;
			}
			else {
				cout << "See you Babye...!" << endl;
				return 0;
			}
		}

};

class Customer{
	string Name;
	Cstaff * cs;
	string* prescription;

	public:
		Customer(string Name): Name(Name){
			cs = new Cstaff("Arqam");
		};

		void give_prescription(){

			prescription = new string;
			getline(cin, *prescription);
			cs->take_prescription(*prescription);
		}
};

int main(){

	Syrup s[2];
	string name, formula, m_date, ex_date;
	float price;
	for(int i=0; i < 2; ++i){
		
		fflush(stdin);
		cout << "Name: "; getline(cin, name);
		fflush(stdin);
		
		cout << "Formula: "; getline(cin, formula);
		fflush(stdin);
		
		cout << "M_date: "; getline(cin, m_date);
		fflush(stdin);
		
		cout << "EX_date: "; getline(cin, ex_date);
		fflush(stdin);
		
		cout << "Price: "; cin >> price;
		
		fstream med;
		med.open("Medic.txt", ios::app);
		if(!med){
			cout << "file eerror";
		}
		else {
			med << name << " " << formula << " " << price << " " << m_date << " " << ex_date << endl;
		}
		
		med.close();
		
		s[i].addSyrup(name, formula, price, m_date, ex_date);
	}
//	Customer c1("Ali");
//	c1.give_prescription();
}
