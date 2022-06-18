#include <iostream>

using namespace std;


class Employee{
	protected:
		string name;
		int age;
		double salary;
	
	
	public:
		
		Employee();
		Employee(string name, int age, double salary){
			this->name = name;
			this->age = age;
			this->salary = salary;
		}
		
		virtual void Display() = 0; // Abstract function or pure virtual function
		
};

class Pilot: public Employee{
	
	const string Id;
	public:
		Pilot();
		Pilot(string name, int age, double salary, string Id):Employee(name,age, salary), Id(Id){
		}
	
	void Display(){
		cout << name << endl;
		cout << age << endl;
		cout << salary << endl;
		cout << Id << endl;
	}
	
	
};


int main(){
	
	Employee* p; // Parent ka pointer me child ki value store - Upcasting
	p = new Pilot("Ali", 20, 17000.00, "F11-AZ"); // Upcasting 
	p->Display();
	
	// Employee* P; 
}