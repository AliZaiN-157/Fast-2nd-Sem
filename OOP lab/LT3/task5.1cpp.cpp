#include<iostream>
#include<cstring>

using namespace std;

int m = 5; // Original Value is 500 but for the sake of simplicity 5 is used.
int b = 10; //  Original Vlaue is 1000 but for the sake of simplicity 10 is used.

class Book{
	
	string Title;
	int Book_count;
	float Expense;
	
	
	public:
		
		// setters
		void setTitle(string title){
			Title = title;
		}
		
		// getters
		
		string show_Title(){
			return Title;
		}
		
		int show_bookCount(){
			return Book_count;
		}
		
		float show_expense(){
			return Expense;
		}
		
		// Logic
		
		void add_book(){
			Book_count++;
		}
		
		void buy_book(float amount){
			
			float avg;
			
			if(Book_count < 11){
				avg = Expense / Book_count;
				
			}
			else{
				add_book();
				Expense += amount;
			}
			
		}
};

class MemberType{
	
	string Name;
	string Contact;
	string Member_Card;
	
	public:
		
//		MemberType(string Name, string Contact, int num){
//			
//			this->Name = Name;
//			this->Contact = Contact;
//			
//			if(num == 1){
//				Member_Card == "Gold";
//			}
//			else if(num == 2){
//				Member_Card == "New";
//			}
//		}
		
		void check_membership(int num){
			
			if(num == 1){
				Member_Card == "Gold";
			}
			else if(num == 2){
				Member_Card == "New";
			}
		}
		
		string show_membership(){
			return Member_Card;
		}
		
		void change_name(string name){
			Name = name;
		}
		
		string show_name(){
			return Name;
		}
		
		void change_contact(string contact){
			Contact = contact;
		}
		
		string show_contact(){
			return Contact;
		}
};

int main(){
	
	Book book[b];
	MemberType member[m];
	
	string title,name, contact; int option;
	
	cout << "Set Book Title: " << endl;
	for(int i=0; i < b ; i++){
		cout << "Enter Book Title: ";
		cin.ignore();
		getline(cin, title);
		book[i].setTitle(title);
	}
	system("pause");
	system("cls");
	
	cout << "Set Members Details: " << endl;
	for(int i=0; i < m; i++){
		cout << "Member Name: "; cin.ignore(); getline(cin, name);
		member[i].change_name(name);
		cout << "Member Contact Details: "; cin.ignore(); getline(cin, contact);
		member[i].change_contact(contact);
		cout << "Member Type:" << endl;
		cout << "1. Gold Member" << endl << "2. New Member" << endl;
		cin >> option;
		member[i].check_membership(option);
	}
	
	system("pause");
	system("cls");
	
	while(1){
		cout << "Welcome to Fast Book Store " << endl;
		
		cout << "Menu: " << endl;
		cout << "1. Buy Book" << endl;
	}
	
}
