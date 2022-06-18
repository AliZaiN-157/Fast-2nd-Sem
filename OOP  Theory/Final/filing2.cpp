#include <iostream>
#include <fstream>

using namespace std;


int main(){
	
	fstream a;
	
	a.open("num.txt", ios::in | ios::out);
	
	if(!a.is_open()){
		cout << "file not found";
	}
	
	int num, sum=0;
		
	while(a >> num){
		sum += num;
	}
	
	a.clear();
	a << endl << sum;
	
	a.close();
	
}