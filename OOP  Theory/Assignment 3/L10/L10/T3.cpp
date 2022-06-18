#include <iostream>
#include <fstream>

using namespace std;

int main()
{
 // Take a class Person having two attributes name and age.
 // Include a parametrized constructor to give values to all data members.
 // In main function
 // i.Create an instance of the person classand name it person1.
 // ii.Create a binary file person.bin and write person1 object into it.
 // iii.Read the person1 object from the file.
 // iv.Return 0

	class Person {
		string name;
		int age;
		public:
			Person() {};
			Person(string name, int age = 1) {
				this->name = name;
				this->age = age;
			}
			
			string getName() {
				return name;
			}

			int getAge() {
				return age;
			}
	};
	
	Person person1("Ali", 20);
	ofstream outfile;
	outfile.open("person.bin", ios::out | ios::binary);
	outfile.write((char *)& person1, sizeof(person1));
	outfile.close();

	Person person2;
	ifstream infile;
	infile.open("person.bin", ios::in | ios::binary);
	infile.read((char *)&person2, sizeof(person2));
	infile.close();

	cout << person2.getName() << endl;
	cout << person2.getAge() << endl;
	

	return 0;

	
	
	
	

}


