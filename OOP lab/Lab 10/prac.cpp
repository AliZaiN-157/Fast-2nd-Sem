#include<iostream>
using namespace std;
template<class Weighttype> class ZooAnimal
{
	Weighttype weight;
	public:
		ZooAnimal(Weighttype x);
		
		Weighttype get_weight(){
			return weight;
		}
};
template <class Weighttype> ZooAnimal <Weighttype>::ZooAnimal(Weighttype x)
{
	int flag=0;
	cout << "Tthis ia a coonstructor function for the class template ZooAnimal with template type parameter weighttype.";
	while(!flag){
	try{
		if(x<0){
			flag=0;
			throw 0;
		}
		
		else {
		weight =x;
		flag=1;
	}
	}
	catch(int x){
		int y;
		cout << "\n\nInvalid Input... Try Again: ";
		cin >> y;
		if(y<0){
			flag =0;
		}
		else{
			flag=1;
			weight =y;
		} 
	}
}
}
int main()
{
	ZooAnimal<float> OB(-9.1);
	
	cout << "\n\nWeight Entered: " << OB.get_weight();
}
