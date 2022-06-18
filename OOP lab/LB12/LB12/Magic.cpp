#include <iostream>

using namespace std;

class Animal{
	string name;
	
	public:
		void foundln(){
		}
		
		void setName(string name){
			this->name = name;
		}
		
		string getname(){
			return name;
		}
};

class MarineAnimal: virtual public Animal{
	
	public:
		void foundln(){
			cout << "Whales can be found in water" << endl;
		}
}; 

class Mammal : virtual public Animal{
	
	public:
		void foundln(){
			cout << "Whales can be found in water and land" << endl;
		}
};

class Whales: public MarineAnimal , public Mammal {
	string whaleType;
	
	public:
		
		void foundln(){
			cout << "A " << whaleType << " " << Animal::getname() <<" can be found in water" << endl;
		}
		
		void setwhaleType(string whalesType){
			this->whaleType = whalesType;
		}
		
		string showwhaleType(){
			return whaleType;
		}
	
};

int main(){
	
	Whales whaleBaleen;
	whaleBaleen.setName("whale");
	whaleBaleen.setwhaleType("Baleen");
//	Animal::foundln();
//	Mammal::foundln();
//	Whales::foundln();
	whaleBaleen.foundln();
	
}