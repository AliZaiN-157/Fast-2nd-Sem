gfhjm /#include <iostream>
#include <fstream>

using namespace std;

class Employee{
	
	int id;
//	string name;
	float salary;
	char name[20];
	
	public:
		Employee(){
		};
		Employee(int _id, string _name, float _salary){
			this->id = _id;
			strcpy(name, _name.c_str());
			this->salary = _salary;
		}
		
		void info(){
			cout << "ID: " << id << "\tName: " << name << "\tSalary: " << salary << endl;
		}
		
		int show_id(){
			return id;
		}
		
		float get_salary(float f){
			salary = f;
		}
};

void create(Employee &obj){
	
	ofstream f("employ.dat", ios::binary | ios::app);
	f.write((char*)&obj, sizeof(obj));
	f.close();
}

void read(){
	
	Employee obj;
	ifstream f("employ.dat", ios::binary);
	
	while(f.read((char*)&obj, sizeof(obj))){
		obj.info();
	}
	f.close();
}

bool update(int id, float salary){
	
	bool found = false;
	
	fstream f("employ.dat", ios::in | ios::out | ios::binary);
	
	Employee obj;
	
	while(f.read((char*)&obj, sizeof(obj))){
		
		if(obj.show_id()== id){
			
			found = true;
			obj.get_salary(salary);
//			strcpy(obj.get_salary(salary), salary);
			f.seekp(f.tellg() - sizeof(obj), ios::beg);
			f.write((char*)&obj, sizeof(obj));
			
			break;
		}
	}
	
	return found;
}

void del(int id){
	
	ifstream f("employ.dat", ios::binary);
	ofstream temp("temp.dat", ios::binary);
	
	Employee obj;
	
	while(f.read((char*)&obj, sizeof(obj))){
		
		if(obj.show_id()!= id){
			
			temp.write((char*)&obj, sizeof(obj));
		}
	}
	
	f.close();
	temp.close();
	
	remove("employ.dat");
	rename("temp.dat", "employ.dat");
}

int main(){
	
	Employee e1(001, "Ali", 50000.0);
	Employee e2(002, "Zain", 75000.0);
	
//	create(e1);
//	create(e2);
//	read();
//	
//	update(001, 68000.0);
	
	read();
	del(2);
	read();
}