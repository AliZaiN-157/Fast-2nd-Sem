
#include <iostream>

using namespace std;


// Write a generic class which asks user for two items as input and return the concatenation of both.


template <class T>
class Concatenate
{
	public:
	T concatenate(T a, T b)
	{
		return a + b;
	}
};


int main()
{
	int num1, num2;
	string ch1, ch2;
	Concatenate<int> c;
	cout << "Enter two integers: \n";
	cin >> num1;
	cin >> num2;
	cout << c.concatenate(num1, num2) << endl;
	
	Concatenate<string> c1;
	cout << "Enter two characters: \n";
	cin >> ch1;
	cin >> ch2;
	
	cout << c1.concatenate(ch1, ch2) << endl;
	
	return 0;
}

