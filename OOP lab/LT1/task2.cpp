#include <iostream>
using namespace std;

int main() {
	
	int len, smallest_number;
	
	cout << "Enter Length of Array: " << endl;
	cin >> len;
	
	if(len < 1){
		
		cout << "Enter Length Greather than 0" << endl;
		
	}
	else {
		int arr[len];
	
		cout << "Enter Elements: " << endl;
		for(int i = 0; i < len; i++){
			cin >> arr[i];
		}
		
		smallest_number= arr[0];
		for(int i = 0; i < len; i++){
			if(smallest_number > arr[i]){
				smallest_number = arr[i]; 
			}
		}
	
	cout << "Smallest number: " << smallest_number << endl;
		
	}
}
