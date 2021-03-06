#include<iostream>
#include<cassert>
#include<cstring>

using namespace std;

class Employee{
	string firstName;
	string lastName;
	string address;
	string code;
	float monthly_salary;
	static int employee_count;

	public:
		Employee(){
		}
		Employee(string firstName, string lastName, string address, string code, float monthly_salary)
		: firstName(firstName), lastName(lastName), address (address), code(code), monthly_salary(monthly_salary){

			employee_count++;
		}

		// Setters

		void setName(string firstName, string lastName){
			this->firstName = firstName;
			this->lastName = lastName;
		}

		void setAddress(string address){
			this->address = address;
		}

		void setCode(string code){
		    this->code = code;
		}

		void setSalary(float monthly_salary){
			if(monthly_salary > 100000){
				assert("False");
			}
			else {
				this->monthly_salary = monthly_salary;
			}
		}


		int show_emp_count() const{
			return employee_count;
		}

		string showName() const{
			return firstName + " " + lastName;
		}

		float showSalary() const{
			return monthly_salary;
		}

		string showCode() const {
			return code;
		}
		string showAddress() const{
			return address;
		}
};

int Employee :: employee_count = 0;

class Office{
	string Manager_Name;
	const string office_code;
	float Budget;
	Employee * emp;
	Employee * e;

    // using public in case to operate office_count inside company class;
 //   public:
    static float office_count;

	public:

		Office(string Manager_Name, string office_code): Manager_Name(Manager_Name), office_code(office_code){
		    office_count++;
		    emp = new Employee("Ali", "Zain", "ABC road xyz town", "a456",60000); // adding 1 employee when Office is called
		};

        // Assuming all the data will be insert correctly
		void addEmployees(){
		    int n; string first_name, last_name, address, code;
		    float salary;
		    cout << "How many employees you want to recruit: " << endl;
		    cin >> n;

		    e = new Employee[n];
		    cout << "Adding Employees ....!" << endl;
		    for(int i =0; i<n; i++){
                cout << "Enter First Name: " << endl;
                getline(cin,first_name);
                cout << "Enter Last Name: " << endl;
                getline(cin,last_name);
                e[i].setName(first_name, last_name);
                cout << "Enter code ('m' should not be used): " << endl; // assuming there will me only employee code
                getline(cin,code);
                e[i].setCode(code);
                cout << "Enter Address: " << endl;
                getline(cin,address);
                e[i].setAddress(address);
                cout << "Enter Monthly Salary: " << endl;
                cin >> salary;
                if(salary > 100000){
                    assert("False");
                }
                else {
                    e[i].setSalary(salary);
                }

		    }
		}

		void setManager(){
			this->Manager_Name = Manager_Name;
		}

		string showManager() const{
			return Manager_Name;
		}

		string showCode() const{
			return office_code;
		}

		static float showOfficeCount(){
		    return office_count;
		}

		void setBudget(float Budget){
		    this->Budget = Budget;
		}

		void getEmployeeData(string office_code){
		    // getting data on the bases of office code;
		    cout << emp->showName() << endl;
		    cout << emp->showAddress() << endl;
		    cout << emp->showSalary() << endl;
        }


};
float Office :: office_count = 0.0;

class Company{
	string Name;
	const string Owners_pet_name;
	float Budget = 5000000;
	Office * off;

	public:
		Company(string Name):Name(Name), Owners_pet_name("Shenron"){
		    off = new Office("Ali","ISB48");
		}

		string setName(string Name){
		    this->Name = Name;
		}

		// Distributing Budget among offices.
		// incase function doesn't work public the static office_count
        void DistributeBudget(){
			float count = off->office_count;
			float salary = Budget / count;
			off->setBudget(salary);
		}

		void getData(){
		    string office_code;
		    getline(cin, office_code);
		    off->getEmployeeData(office_code);
		}


};

int main(){
	Company c("Stein Gate Limited");
	c.getData();
}
