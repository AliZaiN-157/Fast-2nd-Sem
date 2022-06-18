#include <iostream>


using namespace std;


// Write a Template of student class with atributes rollno and marks of subjects.
// a function of total marks of all subjects
// You should initialize a constant size array of class type. Your code must contain a function of class return type.


template <class T>
class student
{
	private:
		int rollno;
		T marks[5];
	public:
		student(int r, T m[])
		{
			rollno = r;
			for(int i=0; i<5; i++)
				marks[i] = m[i];
		}
		T total()
		{
			T sum = 0;
			for(int i=0; i<5; i++)
				sum += marks[i];
			return sum;
		}
};


int main()
{
	int rollno;
	float marks[5];
	cout << "Enter rollno: ";
	cin >> rollno;
	for(int i=0; i<5; i++){
		cout << "Enter marks of subject " << i+1 << ": ";
		cin >> marks[i];
	}
		
	student<float> s(rollno, marks);
	cout << "Total marks: " << s.total() << endl;
	return 0;
}



