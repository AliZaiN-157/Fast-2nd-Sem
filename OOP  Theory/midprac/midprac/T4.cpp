
// Question seems to be unclear so i have assumed few things and on the basis of them i have done this code.

#include <iostream>
using namespace std;

class Account {
	protected:
		double balance;
	
	public:
		Account(){}
		Account(double balance) {
			if (balance > 0) {
				this->balance = balance;
			}
			else {
				this->balance = 0;
			}
		}
		virtual void Deposit(double amount) {
			balance += amount;
		}
		
		virtual void Withdraw(double amount) {
			balance -= amount;
		}

		double checkBalance(){
			return balance;
		}
	
};

class InterestAccount : virtual public Account {
	private:
		double interest;
		double interestRate;
	
	public:
		InterestAccount(){}
		InterestAccount(double balance) : Account(balance), interestRate(0.3) {
		}
		
		void Deposit(double amount) {
			balance += amount;
			interest = amount * interestRate;
		}
		double checkInterest(){
			return interest;
		}
};

class ChargingAccount : virtual public Account {
	private:
		double fee;
	
	public:
		ChargingAccount(double balance) :fee(3), Account(balance) {
			
		}
		void Withdraw(double amount) {
			balance -= amount;
			amount -= fee;
			cout << "Amount after fee: " << amount << endl;
		}
};

class ACI {
public:
	void transfer(double amount, Account& acc) {

		acc.Deposit(amount);
	}
	
	void transfer(double amount, InterestAccount& acc) {
		acc.Deposit(amount);
	}

	void transfer(double amount, ChargingAccount& acc) {
		acc.Deposit(amount);
	}
};


int main() {
	Account a1(200);
	ACI i1;
	i1.transfer(1800, a1);
	cout << "Balance of Account: " << a1.checkBalance() << endl;

	InterestAccount a2(200);
	ACI i2;
	i2.transfer(1800, a2);
	cout << "Balance of Account: " << a2.checkBalance() << endl;
	cout << "Interest of Account: " << a2.checkInterest() << endl;
	
	ChargingAccount a3(200);
	ACI i3;
	i3.transfer(1800, a3);
	cout << "Balance of Account: " << a3.checkBalance() << endl;
	
}




