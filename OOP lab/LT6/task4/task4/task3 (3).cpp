#include <iostream>

using namespace std;

class Teacher{
protected:
	string Name;
	int Age;
	string Institute;
	
	public:
		Teacher();
		Teacher(string Name, int Age, string Institute): Name(Name), Age(Age), Institute(Institute){
		};
		
		void setName(string Name){
			this->Name = Name;
		}
		
		void setAge(int Age){
			this->Age = Age;
		}
		
		void setInstitute(string Institute){
			this->Institute = Institute;
		}
		
		void showName(){
			cout << Name << endl;
		}
		
		void showAge(){
			cout << Age << endl;
		}
		
		void showInstitute(){
			cout << Institute << endl;
		}
};

class HumanitiesTeacher: public Teacher{
	string Field;
	string CourseName;
	string Designation;
	
	public:
		HumanitiesTeacher(){
		};
		HumanitiesTeacher(string Name, int Age, string Institute, string Field, string CourseName, string Designation) 
		: Teacher(Name, Age, Institute), Field(Field), CourseName(CourseName), Designation(Designation){
		};
		
		void setField(string Field){
			this->Field = Field;
		}
		
		void setCourseName(string CourseName){
			this->CourseName = CourseName;
		}
		
		void setDesignation(string Designation){
			this->Designation = Designation;
		}
		
		void showField(){
			cout << Field << endl;
		}
		
		void showCourseName(){
			cout << CourseName << endl;
		}
		
		void showDesignation(){
			cout << Designation << endl;
		}
		
};

class ScienceTeacher: public Teacher{
	string Field;
	string CourseName;
	string Designation;
	
	public:
		ScienceTeacher(){
	};
		ScienceTeacher(string Name, int Age, string Institute, string Field, string CourseName, string Designation) 
		: Teacher(Name, Age, Institute), Field(Field), CourseName(CourseName), Designation(Designation){
		};
		
		void setField(string Field){
			this->Field = Field;
		}
		
		void setCourseName(string CourseName){
			this->CourseName = CourseName;
		}
		
		void setDesignation(string Designation){
			this->Designation = Designation;
		}
		
		void showField(){
			cout << Field << endl;
		}
		
		void showCourseName(){
			cout << CourseName << endl;
		}
		
		void showDesignation(){
			cout << Designation << endl;
		}
};

class MathsTeacher: public Teacher{
	string Field;
	string CourseName;
	string Designation;
	
	public:
		MathsTeacher(){
		};
		MathsTeacher(string Name, int Age, string Institute, string Field, string CourseName, string Designation) 
		: Teacher(Name, Age, Institute), Field(Field), CourseName(CourseName), Designation(Designation){
		};
		
		void setField(string Field){
			this->Field = Field;
		}
		
		void setCourseName(string CourseName){
			this->CourseName = CourseName;
		}
		
		void setDesignation(string Designation){
			this->Designation = Designation;
		}
		
		void showField(){
			cout << Field << endl;
		}
		
		void showCourseName(){
			cout << CourseName << endl;
		}
		
		void showDesignation(){
			cout << Designation << endl;
		}
};

int main(){
	
	int choice, age; 
	string name, designation, course, field, institute;
	
	cout << "Choose Teacher: " << endl;
	cout << "1. Science Faculty" << endl
		 << "2. Math Faculty" << endl
		 << "3. Humanity Faculty" << endl;
	
	cin >> choice;
	
	switch(choice){
		case 1:{
//			ScienceTeacher st1;
			cin.ignore();
			cout << "Enter Your Name: " << endl;
			getline(cin, name);
//			st1.setName(name);
			cout << "Enter Your Age: " << endl;
			cin >> age;
//			st1.setAge(age);
			cin.ignore();
			cout << "Enter Your Institute: " << endl;
			getline(cin, institute);
//			st1.setInstitute(institute);
			cin.ignore();
			cout << "Enter Field Name: " << endl;
			getline(cin, field);
//			st1.setField(field);
			cin.ignore();
			cout << "Enter Course Name: " << endl;
			getline(cin, course);
//			st1.setCourseName(course);
			cout << "Enter Your Designation: " << endl;
			getline(cin, designation);
//			st1.setDesignation(designation);
			ScienceTeacher st1(name, age, institute, field, course, designation);
			break;
		}
		
		case 2: {
//			MathsTeacher mt1;
			cin.ignore();
			cout << "Enter Your Name: " << endl;
			getline(cin, name);
			cin.ignore();
//			mt1.setName(name);
			cout << "Enter Your Age: " << endl;
			cin >> age;
//			mt1.setAge(age);
			cout << "Enter Your Institute: " << endl;
			getline(cin, institute);
			cin.ignore();
//			mt1.setInstitute(institute);
			cout << "Enter Field Name: " << endl;
			getline(cin, field);
			cin.ignore();
//			mt1.setField(field);
			cout << "Enter Course Name: " << endl;
			getline(cin, course);
//			mt1.setCourseName(course);
			cout << "Enter Your Designation: " << endl;
			getline(cin, designation);
//			mt1.setDesignation(designation);
			MathsTeacher mt1(name, age, institute, field, course, designation);
			break;
		}
		case 3:{
//			HumanitiesTeacher ht1;
			cin.ignore();
			cout << "Enter Your Name: " << endl;
			getline(cin, name);
			cin.ignore();
//			ht1.setName(name);
			cout << "Enter Your Age: " << endl;
			cin >> age;
//			ht1.setAge(age);
			cout << "Enter Your Institute: " << endl;
			getline(cin, institute);
			cin.ignore();
//			ht1.setInstitute(institute);
			cout << "Enter Field Name: " << endl;
			getline(cin, field);
			cin.ignore();
//			ht1.setField(field);
			cout << "Enter Course Name: " << endl;
			getline(cin, course);
//			ht1.setCourseName(course);
			cout << "Enter Your Designation: " << endl;
			getline(cin, designation);
//			ht1.setDesignation(designation);
			HumanitiesTeacher ht1(name, age, institute, field, course, designation);
			break;
		}
	}
}


