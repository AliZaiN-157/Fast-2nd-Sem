#include <iostream>

using namespace std;

class Bank{
	string firstName;
	string LastName;
	float salary;

	public:
		void setfirstName(){
			cout << "Enter your first name: ";
			cin.ignore();
			getline(cin, firstName);
		}

		void setLastName(){
			cout << "Enter your last name: ";
			cin.ignore();
			getline(cin, LastName);
		}

		void setSalary(){

			cout << "Enter Salary: ";
			cin >> salary;

			if (salary < 0) {
				salary = 0;
			}
		}

		void getSalary(){
			float new_sal;
			cout << "Salary: " << salary << endl;
			new_sal = salary + salary*0.2;
			cout << "Salary After This Year: " << new_sal << endl;
		}
};

int main(){

	Bank employee[5];

	for(int i= 0; i< 5 ;i++){
        cout << "Employee #" << i+1 << endl;
		employee[i].setfirstName();
		employee[i].setLastName();
		employee[i].setSalary();
		employee[i].getSalary();
		cout << endl;

	}

}
