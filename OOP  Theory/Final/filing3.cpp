#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream is("myFile.txt"); // contains: hello world this is a test
	char c;

	while(!is.eof())
	{
		is.get(c);

		if(c == 'o')
			is.seekg(6, ios::cur);

		if(!is.eof())
			cout << c;
	}
}