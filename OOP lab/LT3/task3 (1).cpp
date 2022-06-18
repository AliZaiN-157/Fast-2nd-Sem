#include<iostream>
#include<string.h>
#include <conio.h>
using namespace std;

int components = 3; // 3 for ease of checking you can change it if you want :).

class bookType{
	string title;
	string authors[4];
	string publisher;
	string isbn;
	int copies;
	int price;
	int year_of_publication;
	
	public: 
		
		bookType(){
		};
		bookType(string title, string publisher, string isbn, int price, int year_of_publication, int copies){
			this->title = title;
			this->publisher = publisher;
			this->price = price;
			this->isbn = isbn;
			this->year_of_publication = year_of_publication;
			this->copies = copies;
		}
		
		void setTitle(string title){
			this->title = title;
		}
		
		string getTitle(){
			return title;
		}
		void setPublisher(string publisher){
			this->publisher = publisher;
		}
		void setPrice(int price){
			this->price = price;
		}
		void setIsbn(string num){
			this->isbn = num;
		}
		
		void setYoP(int year){
			this->year_of_publication = year;	
		}
		
		void setCopies(int num){
			this->copies = num;
 		}
		
		
		void setAuthors(int a){
			for(int i=0 ; i < a ; i++){
				cin.ignore();
				getline(cin, this->authors[i]);
			}
		}
		void getAuthor(int a){
			for(int i=0 ; i < a ; i++){
				cout << authors[i] << endl;
			}
		}
		
		bool check_title(string title){
			if(this->title == title){
				return true;
			}
			else {
				return false;
			}
		}
		
		bool check_isbn(string isbn){
			if(this->isbn == isbn){
				return true;
			}
			else {
				return false;
			}
		}
		
		void update_copies(int copies){
			this->copies = copies;
		}
		
		
		int get_copies(){
			return copies;
		}
		
		string get_publisher(){
			return publisher;
		}
		
		string get_isbn(){
			return isbn;
		}
		
};

int main(){
	
	bookType bt[components];

	
	string title, publisher, isbn;
	int no_of_author, no_of_copies;
	float price;
	
	
	for(int i=0; i<components; i++){
		cout << "Enter Book Title: ";
		cin.ignore();
		getline(cin, title);
		bt[i].setTitle(title);
		
		cout << "Enter Number of Author: ";
		cin >> no_of_author;
		bt[i].setAuthors(no_of_author);
		
		cout << "Enter Publisher: ";
		cin.ignore();
		getline(cin, publisher);
		bt[i].setPublisher(publisher);
		
		cout << "Enter ISBN: ";
		cin.ignore();
		getline(cin, isbn);
		bt[i].setIsbn(isbn);
		
		cout << "Enter Price: ";
		cin >> price;
		bt[i].setPrice(price);
		
		cout << "Enter Copies: ";
		cin >> no_of_copies;
		bt[i].update_copies(no_of_copies);
		
		cout << endl;
	}
	
	while(1){
		
		system("cls");
		
		int options, num, copies;
		
		cout << "Menu" << endl << endl;
		
		cout << "1. Search Book By Title: " << endl
			 << "2. Search Book By ISBN: " << endl
			 << "3. Update No. of copies of book " << endl
			 << "4. Exit Program" << endl;
		
		cin >> options;
		
		switch(options){
			
			case 1:
				cout << "Enter Title: " << endl;
				cin.ignore();
				getline(cin, title);
				for(int i=0; i<components; i++){
					if(bt[i].check_title(title)){
						cout << "Book Found :)";
					}
				}

				break;
			case 2:
				cout << "Enter ISBN: " << endl;
				cin.ignore();
				getline(cin, isbn);
				for(int i=0; i<components; i++){
					if(bt[i].check_isbn(isbn)){
						cout << "Book Found :)";
					}
				}
				break;
			case 3:
				cout << "Enter Copies: " << endl;
				cin >> copies;
				cout << "Which Book copies you want to change(integer): " << endl;
				cin >> num;
				bt[num+1].update_copies(copies);
				break;
			case 4:
				return 0;
		}
		
	}
	 
}
