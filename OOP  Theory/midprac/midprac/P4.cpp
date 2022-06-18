#include <iostream>

using namespace std;

class Vehicle {
protected:
	string type_of_car, make, model, color;
	int year;
	float miles_driven;

public:
	/*Vehicle(string toc, string make, string model, string color, int year, float md): type_of_car(toc), make(make), model(model), 
		color(color), year(year), miles_driven(md){}*/
	Vehicle() {};
	Vehicle(string toc, string make, string model, string color, int year, float md) {
		type_of_car = toc;
		this->make = make;
		this->model = model;
		this->color = color;
		this->year = year;
		miles_driven = md;
	}
};

class GasVehicle :  virtual public Vehicle {
protected:
	int fuel_tank_size;

public:
	/*GasVehicle(int tank_size, string toc, string make, string model, string color, int year, float md) :
		Vehicle(toc, make, model, color, year, md), fuel_tank_size(tank_size) {};*/
	GasVehicle() {};
	GasVehicle(int tank_size, string toc, string make, string model, string color, int year, float md) {
		fuel_tank_size = tank_size;
		type_of_car = toc;
		this->make = make;
		this->model = model;
		this->color = color;
		this->year = year;
		miles_driven = md;
	}
};

class ElectricVehicle : virtual public Vehicle {
protected:
	float energy_storage;

public:
	ElectricVehicle() {};
	/*ElectricVehicle(float es, string toc, string make, string model, string color, int year, float md) :
		Vehicle(toc, make, model, color, year, md), energy_storage(es) {};*/

	ElectricVehicle(float es, string toc, string make, string model, string color, int year, float md) {
		energy_storage = es;
		type_of_car = toc;
		this->make = make;
		this->model = model;
		this->color = color;
		this->year = year;
		miles_driven = md;
	}
};

class HighPerfomance: public GasVehicle{

	float horse_power;
	float top_speed;
};

class HeavyVehicle : public GasVehicle, public ElectricVehicle {
protected:
	int max_weight;
	int length;
	int wheels_count;

public:
	HeavyVehicle() {};
	HeavyVehicle(int mw, int l, int wc, float es ,int tank_size, string toc, string make, string model, string color, int year, float md) {

		fuel_tank_size = tank_size;
		energy_storage = es;
		type_of_car = toc;
		this->make = make;
		this->model = model;
		this->color = color;
		this->year = year;
		max_weight = mw;
		length = l;
		wheels_count = wc;
		miles_driven = md;
	}

};

class SportCar : public HighPerfomance {
	string gearbox; // automatic or manual;
	string drive_system;
};

class ConstructionTruck : public HeavyVehicle {

	string cargo; //cement gravel sand
};

class Bus : public HeavyVehicle {

	int no_of_seats;

public:
	Bus() {};
	Bus(int no_of_seats, int mw, int l, int wc, float es, int tank_size, string toc, string make, string model, string color, int year, float md) {
		
		this->no_of_seats = no_of_seats;
		fuel_tank_size = tank_size;
		energy_storage = es;
		type_of_car = toc;
		this->make = make;
		this->model = model;
		this->color = color;
		this->year = year;
		max_weight = mw;
		length = l;
		wheels_count = wc;
		miles_driven = md;
	}

	void Display() {
		cout << "Type Of Car: " << type_of_car << endl;
		cout << "Make: " << make << endl;
		cout << "Model: " << model << endl;
		cout << "Color: " << color << endl;
		cout << "Made in Year: " << year << endl;
		cout << "Max: " << max_weight  << endl;
		cout << "length: " <<  length <<endl;
		cout << "wheels count: " << wheels_count <<endl;
		cout << "miles driven: " <<  miles_driven << endl;
		cout << "No of seats: " << no_of_seats << endl;
		cout << "Fuel Tank: " << fuel_tank_size << endl;
		cout << "Energy Storage: " << energy_storage << endl;

	}

};


int main() {

	//Bus(int no_of_seats, int mw, int l, int wc, float es, int tank_size, string toc, string make, string model, string color, int year, float md)

	Bus b1(18, 6000, 280, 4, 900.0, 10, "Buss", "honda", "speedo14", "black", 2020, 10000);
	b1.Display();

}