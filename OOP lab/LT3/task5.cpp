#include<iostream>
#include<csting>

using namespace std;

class Book{
	
	string Title;
	string Book_price;
	
	public:
		
		void add_book(){
			No_of_books++;
		}
		
		void buy_book(float price){
			
			add_book();
			Expense += price;
		} 
		
};

class MemberType{
	
	string Name;
	string Contact;
	string Member_Card;
	
	public:
		
		MemberType(string name, string contact){
			Name = name;
			Contact = contact;
			Member_Card = "New";
		}
		
		void change_name(string name){
			Name = name;
		}
		
		string show_name(){
			return Name;
		}
		
		void change_contact(){
			Contact = contact;
		}
		
		string show_contact(){
			return Contact;
		}
		
};

void Gold_Member(string name, string contact);
void New_Member(string name, string contact);

int main(){
	
	int choice; string name, contact;
	
	cout << "Welcome to XYZ Book Store" << endl << endl;
		
		
	cout << "Customer Type:" << endl;
	cout << "1. Gold Member " << endl;
	cout << "2. New Member" << endl;
		
		cin >> choice;
	
	switch(choose){
		case 1:
			
			cout << "Enter your Name: " << endl;
			cin.ignore();
			getline(cin, name);
			
			cout << "Enter your Contact details: " << endl;	
			cin.ignore();
			getline(cin, contact);		
			
			void Gold_Member(name,contact);
			break;
		case 2:
			cout << "Enter your Name: " << endl;
			cin.ignore();
			getline(cin, name);
			
			cout << "Enter your Contact details: " << endl;	
			cin.ignore();
			getline(cin, contact);
			void New_member(name, contact);
			MemberType New();
			break;
		
		default:
			cout << "No such options" << endl;
	}
}

void Gold_Member(string name, string contact){
	
	MemberType goldmember(name,contact)
}
