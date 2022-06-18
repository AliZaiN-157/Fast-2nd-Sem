/*Write a function in C++ to count and display the number of lines not starting with alphabet 'A' present in a
text file "STORY.TXT". Example:
1. If the file "STORY.TXT" contains the following lines,
2. The rose is red.
3. A girl is playing there.
4. There is a playground.
5. An aeroplane is in the sky.
6. Numbers are not allowed in the password.
7. The function should display the output as 3.*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	fstream f;
	string line;
	int count = 0;
	
	f.open("story.txt", ios::out);
	if (!f) {
		cout << "Unable to open file";
		
	}
	else {
		f << "The rose is red\nA girl is playing there.\nThere is a playground.\nAn aeroplane is in the sky.\n Numbers are not allowed in the password.";
		f.close();
	}
	
	f.open("story.txt", ios::in);
	if (!f) {
		cout << "file don't exist";
	}
	else {
		while (getline(f, line))
		{
			if (line[0] != 'A')
			{
				count++;
			}
		}
		cout << "Number of lines without A:" << count;
		f.close();
	}
	
	return 0;
}