#include<iostream>

using namespace std;

class Account {
protected:
	double balance;


public:

	Account() {
		balance = 0.0;
	}

	Account(double b ) {

		if (b < 0) {
			cout << "Invalid Balance" << endl;
			balance = 0.0;
		}
		else {
			balance = b;
		}
	};

	double show_balance() {
		return balance;
	}

	void credit(double amount) {
		if (amount > 0) {
			balance += amount;
		}
	}

	void debit(double amount) {
		
		if (amount > balance) {
			cout << "Debit amount exceeded account balance." << endl;
		}
		else {
			balance -= amount;
		}
	}


};

class S_account : public Account {
	double interest_rate;

public:
	S_account() {
		interest_rate = 1.5;
		balance = 0.0;
	}

	S_account(double balance, double interest_rate) : Account(balance), interest_rate(interest_rate) {

	}

	double cal_interest() {
		return balance * interest_rate;
	}
};

class C_account : public Account {
	double fee_per_transaction;

public:
	C_account() {
		fee_per_transaction = 79;
		balance = 0.0;
	}

	C_account(double balance, double fee_per_transaction) : Account(balance), fee_per_transaction(fee_per_transaction) {

	}

	void credit(double amount) {
		if (amount > 0) {
			balance += amount;
		}
	}

	void debit(double amount) {


		if (amount > balance) {
			cout << "Debit amount exceeded account balance." << endl;
		}
		else {
			balance -= fee_per_transaction;
			balance -= amount;
		}
	}

};

int main() {
	cout << "Name: Aisha Motan" << endl;
	cout << "Nu-ID: 21k-4952" << endl;
	
	cout << endl << endl;

	int option; double amount, fee, interest;

	cout << "Welcome to Corrupt Bank" << endl;

	cout << "Choose Account Type:" << endl;
	cout << "[1] Saving Account" << endl 
		<< "[2] Checking Account" << endl;

	cin >> option;

	switch(option){

		case 1: {
			cout << "Enter Account Balance: ";
			cin >> amount;

			cout << "Interest Rate is 15 %" << endl;

			interest = 0.15; // Interest Rate is set by default.

			S_account acc1(amount, interest);

			while (1) {

				system("cls");

				cout << "Menu: " << endl;
				cout << "[1] Check Balance: " << endl;
				cout << "[2] Credit Amount" << endl;
				cout << "[3] Debit Amount" << endl;
				cout << "[4] Check Interest" << endl;
				cout << "[5] Exit" << endl;

				cin >> option;

					switch (option) {
					case 1: {
						cout << "Balance: " << acc1.show_balance() << endl;
						system("pause");
						break;
					}
					case 2: {
						cout << "Enter credit amount: " << endl;
						cin >> amount;
						acc1.credit(amount);
						system("pause");
						break;
					}
					case 3: {
						cout << "Enter debit amount: " << endl;
						cin >> amount;
						acc1.debit(amount);
						system("pause");
						break;
					}
					case 4: {
						cout << "Interest: " << acc1.cal_interest() << endl;
						acc1.credit(acc1.cal_interest());
						system("pause");
						break;
					}
					case 5: {
						return 0;
					}
				}

			}
			break;
		}
		case 2: {
			cout << "Enter Account Balance: ";
			cin >> amount;

			cout << "Fee per transcation is 79.9" << endl;

			fee = 79.9; // Fee per transaction is set by default.

			C_account acc1(amount, fee);

			while (1) {

				system("cls");

				cout << "Menu: " << endl;
				cout << "[1] Check Balance: " << endl;
				cout << "[2] Credit Amount" << endl;
				cout << "[3] Debit Amount" << endl;
				cout << "[4] Exit" << endl;

				cin >> option;

				switch (option) {
				case 1: {
					cout << "Balance: " << acc1.show_balance() << endl;
					system("pause");
					break;
				}
				case 2: {
					cout << "Enter credit amount: " << endl;
					cin >> amount;
					acc1.credit(amount);
					system("pause");
					break;
				}
				case 3: {
					cout << "Enter debit amount: " << endl;
					cin >> amount;
					acc1.debit(amount);
					system("pause");
					break;
				}
				case 4: {
					return 0;
					break;
				}
				}

			}
			break;
		}
	}
		
	

}