#include <iostream>

using namespace std;

class Medicine{
	protected:
		string name, generic_f, man_date, exp_date;
		float retail_price;
		
	public:
		
		Medicine();
		Medicine(string name, string generic_f, man_date, exp_date, retail_price){
			this->name = name;
			this->generic_f = generic_f;
			this->man_date = man_date;
			this->exp_date = exp_date;
			this->retail_price = retail_price;
		}
			
};

class Tablet: public Medicine{
	float sucrose_level;
	
	public:
		Tablet(string name, string generic_f,string man_date,string exp_date,float retail_price):
		Medicine(name, generic_f, man_date, exp_date,retail_price), sucrose_level(sucrose_level){
			
		}
};

class Capsules: public medicine{
	
	float absorption_level;
	
	public:
		Capsules(string name, string generic_f,string man_date,string exp_date,float retail_price):
		Medicine(name, generic_f, man_date, exp_date,retail_price), absorption_level(absorption_level){
			
	}
};

class Syrup:public medicine{
	public:
		Syrup(string name, string generic_f,string man_date,string exp_date,float retail_price):
		Medicine(name, generic_f, man_date, exp_date,retail_price), absorption_level(absorption_level){
			
	}
};


class P
