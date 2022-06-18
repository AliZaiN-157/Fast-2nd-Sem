#include<iostream>
#include<cstring>

using namespace std;

int total_book = 2;
int total_members = 3;


class Book{

	string Title;


	public:

		// setters
		void setTitle(string title){
			Title = title;
		}

		// getters

		string show_Title(){
			return Title;
		}

//		int show_bookCount(){
//			return Book_count;
//		}
//
//		float show_expense(){
//			return Expense;
//		}

		// Logic

};

class MemberType{

	string Name;
	string Contact;
	bool Member_Card;
	int Book_count;
	float Expense;

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
				Member_Card == true;
			}
			else if(num == 2){
				Member_Card == false;
			}
		}

		void change_name(string name){
			Name = name;
		}

		bool check_name(string name){
			if(Name == name){
				return true;
			}
			else {
				return false;
			}
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

        int show_bookCount(){
			return Book_count;
		}

		float show_expense(){
			return Expense;
		}

		void add_book(){
			Book_count++;
		}

		void buy_book(float amount){

			float avg;

			if(Member_Card == true){

				if(Book_count > 10){
					avg = Expense / Book_count;
					cout << "After Buying 10 book you have a discount of " << avg << endl;
					cout << "and your total Expense is: " << Expense-avg << endl;

				}
				else{
					Expense += amount * 0.05;
				}
			}
			else {
				Expense += amount;
			}


		}
};

int main(){

	MemberType member[total_members];
	Book book[total_book];

	cout << "Enter Book Details: " << endl;
	string title,name, contact, username; int option, member_num;

	cout << "Set Book Title: " << endl;
	for(int i=0; i < total_book ; i++){
		cout << "Enter Book Title: ";
		cin.ignore();
		getline(cin, title);
		book[i].setTitle(title);
	}
	system("pause");
	system("cls");

	cout << "Set Members Details: " << endl;
	for(int i=0; i < total_members; i++){
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

	cout << "Welcome to ABC Book Store: " << endl;
	cout << "Enter your name: " << endl;
	cin.ignore();
	getline(cin, username);

	for(int i = 0; i < total_members; i++){
		if(member[i].check_name(username)){
			cout << "User Found ...!" << endl;
			member_num = i;
			break;
		}
		else {
			cout << "User Not Found ....!" << endl;
		}
	}
	while(1){
            system("cls");
		cout << "Menu: " << endl;
		cout << "1. Show Info" << endl;
		cout << "2. Buy Book" << endl;
		cout << "3. Check Expense" << endl;
		cout << "4. Inventory" << endl;
		cout << "5. Exit" << endl;

		cin >> option;

		float amount;
		switch(option){
			case 1:
			    cout << "Users Info: " << endl << endl;
			    cout << "Users Name: " << member[member_num].show_name() << endl;
			    cout << "Users Contact: " << member[member_num].show_contact() << endl;
			    system("pause");
				break;
			case 2:
				cout << "Enter the amount of book: "; cin >> amount;
				member[member_num].add_book();
				member[member_num].buy_book(amount);
				system("pause");
				break;
			case 3:
			    cout << "Total Expense is: " << member[member_num].show_expense();
			    system("pause");
				break;
			case 4:
			    cout << "Total Number of Books In your Inventory is: " << member[member_num].show_bookCount();
			    system("pause");
				break;
            case 5:
                return 0;
		}
	}



}
