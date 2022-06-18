#include <iostream>
#include <string>
using namespace std;

class Bank{
	string Name;
	int age;
	string NIC;
	string Address;
	float Opening_Balance;
	float Current_Balance = 0;
	string Contact_Num;
	int PIN = 0;
	
	public:
		
		// setters
		void setName(){
			cout << "Enter your Name: " << endl;
			cin >> Name;
		}
		void setAge(){
			cout << "Enter Age: " << endl;
			cin >> age;
		}
		void setNIC(){
			cout << "Enter CNIC: " << endl;
			cin >> NIC;
		}
		void setAdd(){
			cout << "Enter Address: " << endl;
			cin >> Address;
		}
		void set_Obalance(){
			cout << "Enter Opening Balance: " << endl;
			cin >> Opening_Balance;
			Current_Balance += Opening_Balance;
		}
		void set_Cbalance(){
			cout << "Enter Current Balance: " << endl;
			cin >> Current_Balance;
		}
		void set_contactNum(){
			cout << "Enter Contact Num: " << endl;
			cin >> Contact_Num;
		}
		
		void set_PIN(){
			if (PIN == 0){
				cout << "Set your PIN: " << endl;
				cin >> PIN;
			}
			else {
				cout << "Access Denied" << endl;
			}
		}
		
		void deposit(){
			
			float deposit;
			
			cout << "Enter Amount you want to Deposit: " << endl;
			cin >> deposit;
			
			Current_Balance += deposit;
		}
		
		void withdrawl(){
			
			float amount;
			
			cout << "Enter Amount you want to withdrawl: " << endl;
			cin >> amount;
			if (age >=60){
				Current_Balance  = Current_Balance - Current_Balance*0.0015 - amount;
			}
			else {
				Current_Balance  = Current_Balance - ;
			}
		}
		
		// getters
		
		float check_balance(){
			return Current_Balance;
		}
};

int main(){
	
	Bank customer1;
	customer1.setName();
	customer1.setAge();
	customer1.setNIC();
	customer1.setAdd();
	customer1.set_Obalance();
	customer1.set_PIN();
//	customer1.set_PIN();
	customer1.deposit();
	customer1.withdrawl();

	
	cout << "Your Balance: " << customer1.check_balance() << endl;
	
}
