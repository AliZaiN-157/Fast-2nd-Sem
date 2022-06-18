#include <iostream>
using namespace std;

int main() {
	
	int arr1[3][3], arr2[3][3];
	
	cout << "Enter Element of Array 1: " << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> arr1[i][j];
		}
	}
	
	cout << "Enter Element of Array 2: " << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> arr2[i][j];
		}
	}
	
//	cout << "Displaying Element of Array 1: " << endl;
//	for(int i = 0; i < 3; i++){
//		for(int j = 0; j < 3; j++){
//			cout << arr1[i][j] << "  ";
//		}
//		cout << endl;
//	}
	
//	cout << "Displaying Element of Array 2: " << endl;
//	for(int i = 0; i < 3; i++){
//		for(int j = 0; j < 3; j++){
//			cout << arr2[i][j] << "  ";
//		}
//		cout << endl;
//	}
	
	cout << "Adding Both Matrices: " << endl;
	int add_arr[3][3];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			add_arr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << add_arr[i][j] << "  ";
		}
		cout << endl;
	}
}
