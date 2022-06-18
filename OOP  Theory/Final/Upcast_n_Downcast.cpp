#include <iostream>


using namespace std;

class Person{
	protected:
	string name; int age;
	
	public:
		Person();
		Person(string name, int age){
			this->name = name;
			this->age = age;
		}
		
		virtual void whoami(){
			cout << "Name: " << name << endl;
			cout << "Age: " << age;
		}
};

class Student:public Person{
	
	string id;
	
	public:
		
		Student();
		Student(string name, int age, string id):Person(name, age){
			this->id = id;
		}
		
		void whoami(){
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "ID: " << id;
		}
};

int main(){
	
	// Upcasting is convert the reference or pointer of the derived class to a base class. 
	// Upcasting is safe casting as compare to downcasting.
	
	cout << "Implicit Upcasting \n" << endl;
	
	Person *p;
	Student s("Ali",21,"21K-XXXX");
	p =  &s;
	p->whoami();
	
	cout << endl;
	
	
	///Downcasting is an opposite process for upcasting. 
	//It converts base class pointer to derived class pointer. 
	//Downcasting must be done manually. It means that you have to specify explicit typecast.
	//Downcasting  is unsafe because it doesn't follow is-a relationship
	
	// Explicit Typecasting 
	cout << "\nExplicit Typecasting \n"  <<endl;
	Person p1("Tahir", 22);
	Student *s1 = (Student*) (&p1);
	s1->whoami();
	
	cout << endl;
	
	// Static Typecasting
	cout << "\nStatic Typecasting \n" <<endl;

	Person p2("Kamran",17);
	Student *s2=static_cast<Student*>(&p2);
	s2->whoami();
	
	
	cout << endl;
	
	// Dynamic Typecasting
	cout << "\nDynamic Typecasting \n" <<endl;
	
	Person p3("Mohsin",19);
	Student *s3=dynamic_cast<Student*>(&p3); // Warning line 
	s4->whoami(); 
	
}

