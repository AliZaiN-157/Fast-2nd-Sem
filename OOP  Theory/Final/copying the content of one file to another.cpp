#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	char ch;
	
	ifstream fin;
	ofstream fout;
	
	fin.open("new.txt", ios::in);
	fout.open("old.txt",ios::out);
	
	if (!fin && !fout){
		cout << "File not found";
		return 0;
	}
	
	while(fin.get(ch)){
		fout << ch;
	}
	
	fin.close();
	fout.close();
}