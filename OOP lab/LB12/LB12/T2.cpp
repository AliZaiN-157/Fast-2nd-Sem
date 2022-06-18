#include <iostream>
using namespace std;

// Create a c++ Program to swap the data using template function Two numbers can be of same datatype or combination of different data types.


template <class T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <class T1, class T2>
void Swap(T1& a, T2& b)
{
	T2 temp;
	temp = a;
	a = b;
	b = temp;
}


int main()
{
	int a = 10, b = 20;
	cout << "Before Swap: a = " << a << " b = " << b << endl;
	Swap(a, b);
	cout << "After Swap: a = " << a << " b = " << b << endl <<endl;
	
	
	float c = 10.5, d = 20.5;
	cout << "Before Swap: c = " << c << " d = " << d << endl;
	Swap(c, d);
	cout << "After Swap: c = " << c << " d = " << d << endl << endl;
	
	char e = 'a', f = 'b';
	cout << "Before Swap: e = " << e << " f = " << f << endl;
	Swap(e, f);
	cout << "After Swap: e = " << e << " f = " << f << endl << endl;
	
	string v = "ali", w = "zain";
	cout << "Before Swap: v = " << v << " w = " << w << endl;
	Swap(v, w);
	cout << "After Swap: v = " << v << " w = " << w << endl << endl;

	cout << "Swaping Intger with Float" << endl;
	int g = 90;
	float h = 92.5;
	cout << "Before Swap: g = " << g << " h = " << h << endl;
	Swap(g, h);
	cout << "After Swap: g = " << g << " h = " << h << endl << endl;
	

	return 0;
}
