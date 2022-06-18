#include<iostream>

using namespace std;

class Parent{
	private:
		int privateInt;
	
	protected:
		int protectedInt;
	
	public:
		int publicInt;
		
		void setpublicInt(int n){
			publicInt = n;
		}
		
		void setprotectedInt(int n){
			protectedInt = n;
		}
		
		void setprivateInt(int n){
			privateInt = n;
		}
		
		int getprivateInt() const{
			return privateInt;
		}
		
		int getprotectedInt() const {
			return protectedInt;
		}
		
		int getpublicInt() const {
			return publicInt;
		}
};

class Child_A : private Parent{

};

class Child_B : protected Parent{

	public:
		
		void setPublicInt(int n){
			publicInt = n;
		}
		
		int getPublicInt() const {
			return publicInt;
		}
		
		void setProtectedInt(int n){
			protectedInt = n;
		}	
		int getProtectedInt() const {
			return protectedInt;
		}
		
		
};

class Child_C : public Parent{
		
};

int main(){
	
	Parent p1;
	
	// Any Member Variable is not accessible in private derived class.
	// private
//	Child_A a;
//	a.setprotectedInt(10);
//	cout << a.getprotectedInt() << endl;
//	a.setpublicInt(5);
//	cout << a.getpublicInt() << endl;
//	a.privateInt(15);
//	cout << a.getprivateInt() << endl;
	
	// Only 1(private Member Variable) is not accessible in public derived class.
	// 
	Child_C c;
//	c.setpublicInt(5);
//	cout << c.getpublicInt() << endl;
//	c.setprotectedInt(10);
//	cout << c.getprotectedInt() << endl;
//	c.setprivateInt(15);
//	cout << c.getprivateInt() << endl;
	
	// Protected
	// Only private member variable is not accessible in rotected class;
//	Child_B b;
//	b.setPublicInt(5);
//	cout << b.getPublicInt() << endl;
//	b.setProtectedInt(10);
//	cout << b.getProtectedInt() << endl;
//	b.setprivateInt(10);
//	cout << a.getprivateInt() << endl;

}
