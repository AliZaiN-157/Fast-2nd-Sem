#include <iostream>
using namespace std;

// class template specilization for char

template<class T>
class MyContainer {
	T a;
public:
	MyContainer(T a) {
		this->a = a;
	}

	T increase_by_one() {
		return ++a;
	}
};
template <>
class MyContainer<char>
{
	char a;
	public:
		MyContainer(char a)
	{
		this->a = a;
	}
	
		char make_uppercase() {
			return toupper(a);
		}
	
};


int main() {
	MyContainer<int> c1(5);
	cout << c1.increase_by_one() << endl;
	MyContainer<float> c2(7.2);
	cout << c2.increase_by_one() << endl;
	MyContainer<char> c3('a');
	cout << c3.make_uppercase() << endl;
	return 0;
}


