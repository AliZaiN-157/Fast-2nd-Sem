#include <iostream>
using namespace std;

// Create a c++ Program to add, subtract, multiply and divide two numbers using class template.
// Two numbers can be of the same datatype or combination of different data types.


template <class T1, class T2>
class Calculator
{
	T1 num1;
	T2 num2;
	public:
		Calculator(T1 num1, T2 num2):num1(num1),num2(num2){
		};
		void Calculate() {
			cout << "Add: " << num1 <<" + "<< num2 << " = " << num1 + num2 << endl;
			cout << "Subtract: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
			cout << "Multiply: " << num1 << " * " << num2 << " = " << num1 *  num2 << endl;
			cout << "Divide: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
			cout << endl;
		};
		
};

int main()
{
	Calculator<int, int> c(10,20);
	c.Calculate();
	Calculator<int, float> c1(11,19.5);
	c1.Calculate();
	Calculator<float, int> c2(12.2,18);
	c2.Calculate();
	Calculator<float, float> c3(13.5,17.5);
	c3.Calculate();
	return 0;

}
	


