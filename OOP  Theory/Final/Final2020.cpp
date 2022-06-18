#include <iostream>

using namespace std;


class shape{
	int x;
	
	public:
		shape(int x):x(x){
			
		}
};


class circle: virtual public shape{
	
	int y;
	
	public: 
		circle(int x, int y): shape(x), y(y){
			
		}
};


class square: virtual public shape{
	int z;
	
	public:
		square(int x, int z):shape(x), z(z){
			
		}
		
};

class circle_on_square: public square, public circle{
	int w;
	
	public:
		circle_on_square(int x, int y, int z, int w):shape(x),circle(x,y), square(x,z), w(w){
		}
		
};

int main(){
	
	circle_on_square(1,2,3,4);
}
