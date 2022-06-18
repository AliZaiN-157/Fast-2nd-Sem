#include<iostream>

using namespace std;

class A{
	int x;
	int y;
	
	void check(){
		if(x < 0){
			x = 1;
		}
	}
	
	public:
		void setX(int x){
			this->x = x;
		}
		
		int getX(){
			return x;
		}
		
		void callCheck(){
			check();
		}
};

int main(){
	class A instance;
	instance.setX(-2);
	cout << instance.getX() << endl;
	instance.callCheck();
	cout << instance.getX();
	
}
