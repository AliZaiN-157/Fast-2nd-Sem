#include <iostream>
#include <string>

using namespace std;

class Teacher {
protected:
	string Name;
	int Age;
	string Institute;

public:
	Teacher();
	Teacher(string Name, int Age, string Institute) : Name(Name), Age(Age), Institute(Institute) {
	};

	void setName(string Name) {
		this->Name = Name;
	}

	void setAge(int Age) {
		this->Age = Age;
	}

	void setInstitute(string Institute) {
		this->Institute = Institute;
	}

	void showName() {
		cout << Name << endl;
	}

	void showAge() {
		cout << Age << endl;
	}

	void showInstitute() {
		cout << Institute << endl;
	}
};

class HumanitiesTeacher : public Teacher {
	string Field;
	string CourseName;
	string Designation;

public:
	HumanitiesTeacher() {
	};
	HumanitiesTeacher(string Name, int Age, string Institute, string Field, string CourseName, string Designation)
		: Teacher(Name, Age, Institute), Field(Field), CourseName(CourseName), Designation(Designation) {
	};

	void setField(string Field) {
		this->Field = Field;
	}

	void setCourseName(string CourseName) {
		this->CourseName = CourseName;
	}

	void setDesignation(string Designation) {
		this->Designation = Designation;
	}

	void showField() {
		cout << Field << endl;
	}

	void showCourseName() {
		cout << CourseName << endl;
	}

	void showDesignation() {
		cout << Designation << endl;
	}

	void showDisplay() {
		cout << "Name: " << Name << endl;
		cout << "Age: " << Age << endl;
		cout << "Institute: " << Institute << endl;
		cout << "Field: " << Field << endl;
		cout << "Course: " << CourseName << endl;
		cout << "Designation: " << Designation << endl;

	}

};

class ScienceTeacher : public Teacher {
	string Field;
	string CourseName;
	string Designation;

public:
	ScienceTeacher() {
	};
	ScienceTeacher(string Name, int Age, string Institute, string Field, string CourseName, string Designation)
		: Teacher(Name, Age, Institute), Field(Field), CourseName(CourseName), Designation(Designation) {
	};

	void setField(string Field) {
		this->Field = Field;
	}

	void setCourseName(string CourseName) {
		this->CourseName = CourseName;
	}

	void setDesignation(string Designation) {
		this->Designation = Designation;
	}

	void showField() {
		cout << Field << endl;
	}

	void showCourseName() {
		cout << CourseName << endl;
	}

	void showDesignation() {
		cout << Designation << endl;
	}

	void showDisplay() {
		cout << "Name: " << Name << endl;
		cout << "Age: " << Age << endl;
		cout << "Institute: " << Institute << endl;
		cout << "Field: " << Field << endl;
		cout << "Course: " << CourseName << endl;
		cout << "Designation: " << Designation << endl;

	}
};

class MathsTeacher : public Teacher {
	string Field;
	string CourseName;
	string Designation;

public:
	MathsTeacher() {
	};
	MathsTeacher(string Name, int Age, string Institute, string Field, string CourseName, string Designation)
		: Teacher(Name, Age, Institute), Field(Field), CourseName(CourseName), Designation(Designation) {
	};

	void setField(string Field) {
		this->Field = Field;
	}

	void setCourseName(string CourseName) {
		this->CourseName = CourseName;
	}

	void setDesignation(string Designation) {
		this->Designation = Designation;
	}

	void showField() {
		cout << Field << endl;
	}

	void showCourseName() {
		cout << CourseName << endl;
	}

	void showDesignation() {
		cout << Designation << endl;
	}

	void showDisplay() {
		cout << "Name: " << Name << endl;
		cout << "Age: " << Age << endl;
		cout << "Institute: " << Institute << endl;
		cout << "Field: " << Field << endl;
		cout << "Course: " << CourseName << endl;
		cout << "Designation: " << Designation << endl;

	}
};

int main() {

	int choice, age;
	string name, designation, course, field, institute;

	cout << "Choose Teacher: " << endl;
	cout << "1. Science Faculty" << endl
		<< "2. Math Faculty" << endl
		<< "3. Humanity Faculty" << endl;

	cin >> choice;

	switch (choice) {
	case 1: {
		cin.ignore();
		// Name
		cout << "Enter Your Name: " << endl;
		getline(cin, name);

		// Age
		cout << "Enter Your Age: " << endl;
		cin >> age;

		// Institute
		cin.ignore();
		cout << "Enter Your Institute: " << endl;
		getline(cin, institute);

		// Field Name
		cout << "Enter Field Name: " << endl;
		getline(cin, field);

		// Course Name
		cout << "Enter Course Name: " << endl;
		getline(cin, course);

		// Designation
		cout << "Enter Your Designation: " << endl;
		getline(cin, designation);

		ScienceTeacher st1(name, age, institute, field, course, designation);

		st1.showDisplay();
		
		break;
	}

	case 2: {
		cin.ignore();
		// Name
		cout << "Enter Your Name: " << endl;
		getline(cin, name);

		// Age
		cout << "Enter Your Age: " << endl;
		cin >> age;

		// Institute
		cin.ignore();
		cout << "Enter Your Institute: " << endl;
		getline(cin, institute);

		// Field Name
		cout << "Enter Field Name: " << endl;
		getline(cin, field);

		// Course Name
		cout << "Enter Course Name: " << endl;
		getline(cin, course);

		// Designation
		cout << "Enter Your Designation: " << endl;
		getline(cin, designation);

		MathsTeacher mt1(name, age, institute, field, course, designation);

		mt1.showDisplay();

		break;
	}

	case 3: {
		cin.ignore();
		// Name
		cout << "Enter Your Name: " << endl;
		getline(cin, name);

		// Age
		cout << "Enter Your Age: " << endl;
		cin >> age;

		// Institute
		cin.ignore();
		cout << "Enter Your Institute: " << endl;
		getline(cin, institute);

		// Field Name
		cout << "Enter Field Name: " << endl;
		getline(cin, field);

		// Course Name
		cout << "Enter Course Name: " << endl;
		getline(cin, course);

		// Designation
		cout << "Enter Your Designation: " << endl;
		getline(cin, designation);

		HumanitiesTeacher ht1(name, age, institute, field, course, designation);

		ht1.showDisplay();
		break;
	}
	}
}


