#include<iostream>
#include<list>
#include<string.h>


//NOTE: this file will not work on Dev-C++.

using namespace std;

class student{

	string student_id;
	string student_name;
	string department;
//	string courses[6];
	list<string> courses;
	list<float> marks;
//	float marks[6];
	double percentage;
	double total = 600;
	double obtain_marks;
	float cgpa;


	public:

		void setName(){
			cout << "Enter your Name: ";
			getline(cin, student_name);
		}

		string getName(){
			return student_name;
		}

		void setID(){
			cout << "Enter your Student ID: ";
			cin >> student_id;
		}

		string getID(){
			return student_id;
		}

		void setDepartment(){
			cout << "Enter your Department: ";
			cin >> department;
		}

		string getDepartment(){
			return department;
		}

		void setCourses(){

			string title;

			cout << "Enter Course Name: " << endl;
			for(int i = 0; i< 6 ; i++){
				cin >> title;
				courses.push_back(title);
			}
		}

		void getCourses(){
			for(string course: courses){
				cout << course << endl;
            }

		}

		void setMarks(){
		    float mark;

			cout << "Enter Marks: " << endl;
            for(int i = 0; i< 6 ; i++){
				cin >> mark;
				marks.push_back(mark);
			}
        }


		void getMarks(){
			for(float mark: marks){
            	cout << mark << endl;
        	}
		}

		void Percentage(){

			double sum;
			for(float mark: marks){
				sum+= mark;
			}
			percentage = (sum/total) * 100;
		}

		double get_percentage(){

			return percentage;
		}

		string get_grade(){
			if (percentage > 90){
				return "A";
			}
			else if (percentage > 82){
				return "A-";
			}
			else if (percentage > 76){
				return "B";
			}
			else if (percentage > 70){
				return "B-";
			}
			else {
				return "Course Repeat kro";
			}
		}


};

int main(){

	student std1;
	std1.setName();
	std1.setID();
	std1.setDepartment();
	std1.setCourses();
	std1.setMarks();
	std1.Percentage();

	system("cls");
	cout << "Name: " <<std1.getName() << endl;
    cout << "Student ID: " << std1.getID() << endl;
	cout << "Department: "<< std1.getDepartment() << endl;
    cout << "Grade: "<< std1.get_grade() << endl;

}
