#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

class Student
{
  private:
    int number;
//    char* name;
	string name;
    float gpa;
  public:
    Student(int n, string s, float g){
    	number = n;
    	name = s;
    	gpa = g;
	}
    void save(ofstream& of){
	  of << number << " ";
	  of << name << " ";
	  of << gpa << " " << endl;;
	}
    void load(ifstream& inf){
    	inf >> number;
    	cout << number;
    	inf >> name;
    	cout << name;
    	inf >> gpa;
    	cout << gpa;

	}
};

main()
{
  Student me(11321, "Ali", 2.3);
  Student you(1212, "Zain", 3.5);
  
  ofstream myfile;
  ifstream file;
  
  myfile.open("data.dat", ios::binary | ios::out | ios::app);
  me.save(myfile);
  you.save(myfile);
  myfile.close();
  
  file.open("data.dat", ios::binary | ios::in);
  me.load(file);
  you.load(file);
  file.close();
  return(0);
}