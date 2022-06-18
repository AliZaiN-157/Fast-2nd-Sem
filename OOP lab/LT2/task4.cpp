#include<iostream>

using namespace std;

class Counter{
	int counter = 0;
	
	public:
		
		void increment_by_value(int a){
			if (a > 0){
				counter += a;
			}
			else{
				cout << "Enter Non Negative Integer" << endl;
			}
			
		}
		
		void increment(){
			counter++;
		}
		
		void decrement(){
			if (counter != 0) {
				counter--;
			}
			else {
				cout << "Counter Already Zero" << endl;
			}
		}
		
		void display(){
			cout << "Value of Counter: " << counter << endl;
		}
};

int main(){
	
	Counter c1;
	int num, option;
	
	while(1){
		cout << "Choose Option: \n\n" << endl;
		cout << "1. Increment by value" << endl;
		cout << "2. Increment by single value" << endl;
		cout << "3. Decrement by single value" << endl;
		cout << "4. Display Counter" << endl;
		cout << "5. Exit" << endl;
		
		cin >> option;
		
		switch(option){
			
			case 1:
				system("cls");
				cout << "Enter any positive value: " << endl;
				cin >> num;
				c1.increment_by_value(num);
				break;
			
			case 2:
				system("cls");
				c1.increment();
				break;
			
			case 3:
				system("cls");
				c1.decrement();
				break;
			
			case 4:
				system("cls");
				c1.display();
				break;
				
			case 5:
				return 0;
				
			default:
				cout << "No such option: " << endl;
				break;
			
		}
	}
}
