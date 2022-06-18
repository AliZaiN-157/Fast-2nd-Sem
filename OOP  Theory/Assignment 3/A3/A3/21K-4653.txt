
#include <iostream>
#include <string>

using namespace std;

template<class T1> class Parent {
	T1 var;
	
public:
	Parent(T1 s) {
		var = s;
	}
	
	Parent() {}
	
	void display() {
		cout << var << endl;
	}
};

template <class T2> class Child : public Parent<int> {

public:
	Child(T2 p) : Parent(p) {}
};
	

int main()
{
	Child<int>* c = new Child<int>(10);
	Parent<int>* p = c;
	p->display();
	
}
