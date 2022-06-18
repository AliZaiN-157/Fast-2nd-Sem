#include <iostream>

using namespace std;

class Account{
	
	double balance = 0;
	int no_of_trans = 0;
	float ir;
	
	public:
		
		void add_trans(){
			no_of_trans++;
		}
		
		void deposit(int amount){
			balance += amount;
			add_trans();
		}
		
		void withdraw(int amount){
			balance -= amount;
			add_trans();
		}
		
		int display_trans(){
			return no_of_trans;
		}
		
		double display_balance(){
			return balance;
		}
		
		double cal_interest(int year){
			ir  = balance * 0.05 * year;
			balance += ir;

		}
		
		double display_ir(){
			return ir;
		}
		
}; 

int main(){
	
	Account acc1;
	
	int option, amount, year;
	
	while(1){
		
		cout << "Menu" << endl << endl;
		cout << "1. Display the account balance" << endl
		 	<<	"2. Display the number of transactions" << endl
		 	<<	"3. Display interest earned for this period" << endl
		 	<<	"4. Make a deposit" << endl
		 	<<	"5. Make a withdrawal" << endl
		 	<<	"6. Add interest for this period" << endl
		 	<<	"7. Exit the program" << endl;
	
		cin >> option;		
		
		switch(option){
			case 1:
				system("cls");
				cout << "Remainig Balance: " << acc1.display_balance() << endl;
				break;
			case 2:
				system("cls");
				cout << "Number Of Transaction Made: " << acc1.display_trans() << endl;
				break;
			case 3:
				cout << "Interest Rate: " << acc1.display_ir() << endl;
				break;
			case 4:
				cout << "Enter the Amount you want to Deposit: " << endl;
				cin >> amount;
				acc1.deposit(amount);
				break;
			case 5:
				cout << "Enter the Amount you want to withdrawl: " << endl;
				cin >> amount;
				acc1.withdraw(amount);
				break;
			case 6:
				system("cls");
				cout << "Enter the Year no." << endl;
				cin >> year;
				acc1.cal_interest(year);
				break;
			case 7:
				return 0;
				break;
			
		}
		
	}
	
	
}
