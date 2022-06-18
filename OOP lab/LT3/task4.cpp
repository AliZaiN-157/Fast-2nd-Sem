#include<iostream>
#include<string.h>

using namespace std;

class memberType{
	
	string id;
	string name;
	int no_of_books;
	float expense;
	
	public:
		
		// constructor
		
		// default contructor
		memberType(){
			id = "";
			name = "";
			no_of_books = 0;
			expense = 0.0;
		}
		
		// parameterized constructor 
		memberType(string id , string name, int no_of_books, float expense){
			this->id = id;
			this->name = name;
			this->no_of_books = no_of_books;
			this->expense = expense;
		}
		
		// setters
		
		// No setter for id because it can only be intialized but cannot be modified.
		void setName(string name){
			this->name = name;
		}
		
		void setBooks(int no_of_books){
			this->no_of_books = no_of_books;
		}
		
		void setExpense(float expense){
			this->expense = expense;
		}
		
		// getters
		
		// use getInfo to get all the values with a single method call.
		void getInfo(){
			
			cout << endl << "Information: " << endl << endl;
			cout << "Member ID: " << id << endl;
			cout << "Member Name: " << name << endl;
			cout << "No of Books Member Bought: " << no_of_books << endl;
			cout << "Amount Spent by Member: " << expense << endl;
		}
		
		string getID(){
			return id;
		}
		
		string getName(){
			return name;
		}
		
		int getBooks(){
			return no_of_books;
		}
		
		float getExpense(){
			return expense;
		}
		
};

int main(){
	
	string id,name;
	int no_of_books, option;
	float expense;
	
	cout << "Enter your ID: "; cin >> id;
	cout << "Enter your Name: ";
	cin.ignore();
	getline(cin, name);
	cout << "Enter No of books you bought: "; cin >> no_of_books;
	cout << "Enter the Amount spent: "; cin >> expense;
	
	memberType member1(id, name, no_of_books, expense);
	
	system("cls");
	
	while(true){
		
		cout << endl;
		system("pause");
		system("cls");
		cout << "Menu: " << endl << endl;
		
		cout 
			 << "1. Set Name" << endl
			 << "2. Set No of Books you bought" << endl
			 << "3. Set the Amount spent" << endl
			 << "4. Get ID" << endl
			 << "5. Get Name" << endl
			 << "6. Get No of Books you bought" << endl
			 << "7. Get the Amount spent " << endl
			 << "8. Get all Info" << endl;
			 
		cin >> option;
		switch(option){
			case 1:
				cout << "Enter your name: ";
				cin.ignore();
				getline(cin, name);
				member1.setName(name);
				break;
			case 2:
				cout << "Enter no of books: ";
				cin >> no_of_books;
				member1.setBooks(no_of_books);
				break;
			case 3:
				cout << "Enter the Amount expense: ";
				cin >> expense;
				member1.setExpense(expense);
				break;
			case 4:
				cout << "Member ID: " << member1.getID();
				break;
			case 5:
				cout << "Member Name: " << member1.getName();
				break;
			case 6:
				cout << "No of Books Member Bought: " << member1.getBooks();
				break;
			case 7:
				cout << "Amount Spent by Member: " << member1.getExpense();
				break;
			case 8:
				member1.getInfo();
				break;
				
			default:
				cout << "NO SUCH OPTION......!";
		}
		
	}
	
	
}
