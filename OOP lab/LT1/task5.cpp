#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <conio.h>

using namespace std;

int count = 0;

void title();
void add_data();
void read_data();
void append_data();

struct TelephoneRecord{

	string personName;
	int areaCode;
	long long int number;
} data[10];

int main(){

	int select;

	while(1){

		system("cls");
		title();
		cout << right << setw(42) << "Menu" << endl;
		cout << left << setw(5) << "1.Add data" << endl;
		cout << left << setw(5) << "2.Read data" << endl;
		cout << left << setw(5) << "3.Update data" << endl;
		cout << left << setw(5) << "4.Exit" << endl << endl;

		cout << left << setw(5) << "Choose Options: " << endl;
		cin >> select;
		switch(select){
			case 1:
				add_data();
				break;
			case 2:
				read_data();
				break;
			case 3:
				append_data();
				break;
			case 4:
				cout << "Thank You :)";
				return 0;
			default:
				cout << "There is no such option....!" << endl;
				system("pause");
		}
	}
}

void title(){
	cout << right << setw(50) << "Telephone Records " << endl << endl;
}

void add_data(){
	int quantity; string str;

	system("cls");
	title();

	cout << "Enter the quantity(Max=10 Min=1):" << endl;
	cin >> quantity;

	for(int i=count ; i < count+quantity; i++){

		cout << "Enter Person Name: " << endl;
		cin.ignore();
		getline(cin, data[i].personName);

		cout << "Enter Area Code: " << endl;
		cin >> data[i].areaCode;

		cout << "Enter Telephone Number: " << endl;
		cin >> data[i].number;

		system("cls");
	}
	count += quantity;

}

void read_data(){
	
	string Name; char decision;
	
	do{
		system("cls");
		title();
		cout << "Enter Person Name: " << endl;
		cin.ignore();
		getline(cin, Name);
		for(int i = 0 ; i < count ; i++){
			if(Name.compare(data[i].personName) == 0){
				cout << "Data: " << endl;
				cout << "Person Name: " << data[i].personName <<endl;
				cout << "Area Code: " << data[i].areaCode <<endl;
				cout << "Phone Number: " << data[i].number <<endl;
				break;
			}
		}
		cout << endl <<"want to search any other data (y/n): " << endl;
		cin >> decision;
		
	} while (decision != 'n');
} 

void append_data(){
	
	system("cls");
	title();
	string Name;

	int i = 0, areaCode, number=0;
	cout << "Enter Person Name: " << endl;
	cin.ignore();
	getline(cin, Name);
	
	do{
		if(Name.compare(data[i].personName) == 0){
			cout << "Person Name: " << data[i].personName <<endl;
			cout << "Area Code: " << data[i].areaCode <<endl;
			cout << "Phone Number: " << data[i].number <<endl << endl;
			break;
		}
		
		i++;
	} while (i <= count);
	cout << "Enter New Data: " << endl;
	cout << "Enter New Area Code: ";
	cin >> areaCode;
	data[i].areaCode = areaCode;
	cout << "Enter New Number: ";
	cin >> number;
	data[i].number = number;
	
	cout << endl << "Updated: " << endl;
	cout << "Person Name: " << data[i].personName <<endl;
	cout << "Area Code: " << data[i].areaCode <<endl;
	cout << "Phone Number: " << data[i].number <<endl;
	getch();
}
