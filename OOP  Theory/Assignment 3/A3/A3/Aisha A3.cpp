#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Write a program that reads the contents of file input.txt, encrypts its contents and save the modified text to your output file i.e.output.txt.
// The encryption should be done according to these rules:

// 1. Every digit should be converted to a capital letter in a way that digits are treated as sequence number of the alphabets e.g. 1 should become A, 2 should become B, 5 should become E, 11 should become K.
// 2. Every digit less than 1 or greater than 26 should be converted to the letter Z.


int main()
{
	fstream inputFile;
	fstream outputFile;
	string inputString;
	string outputString;
	char inputChar;
	char outputChar;
	int inputInt;
	int outputInt;
	int i;

	string message;

	inputFile.open("input.txt", ios::out);

	if (!inputFile)
	{
		cout << "Error opening file";
	}
	else

	{
		string message;
		fflush(stdin);
		getline(cin,message);
		inputFile << message;
	
	}

	inputFile.close();

	inputFile.open("input.txt", ios::in);
	outputFile.open("output.txt", ios::out);

	if (!inputFile && !outputFile) {
		cout << "File not opening";
	}

	else {
		while (inputFile >> inputChar)
		{
			inputInt = inputChar;
			if (inputInt >= 48 && inputInt <= 57)
			{
				if (inputInt == 48)
				{
					outputChar = 'Z';
				}
				else
				{
					outputInt = inputInt - 48;
					outputChar = outputInt + 64;
				}
			}
			else
			{
				outputChar = inputChar;
			}
			outputString += outputChar;
		}
		outputFile << outputString;
	}
	inputFile.close();
	outputFile.close();

	return 0;
}







