#include<iostream>
#include<cstring>

using namespace std;

class Device {
protected:
	string Device_ID, Manufacture_Year, Model_Name;
	float Price;
	static int Count;

public:
	Device();
	Device(string a, string b, string c, float price) :Device_ID(a), Manufacture_Year(b), Model_Name(c), Price(price) {

		count();
	}

	static void count() {
		Count++;
	}
	static int getCount() {
		return Count;
	}
};

int Device::Count = 0;

class Camera: public Device {
	string resolution;

public:
	Camera(string a, string b, string c, float price, string res): Device(a,b,c,price), resolution(res) {

	}
};

class MobilePhone: public Device {
protected:
	string resolution;
	int RAM_capacity, Storage;

public:
	MobilePhone(string a, string b, string c, float price, string res, int ram, int storage) : Device(a, b, c, price), 
		resolution(res), RAM_capacity(ram), Storage(storage) {

	}
	void show_Details() {
		cout << "Device ID: " << Device_ID << endl;
		cout << "Model Name:" << Model_Name << endl;
	}
};

class Ledtv: public Device {
	string Screensize;
public:
	Ledtv(string a, string b, string c, float price, string size) :Device(a, b, c, price), Screensize(size) {

	}
};

class Android: public MobilePhone {
	float OS_verison;

public:
	Android(string a, string b, string c, float price, string res, int ram, int storage, float os):
		MobilePhone(a,b,c,price,res,ram,storage),OS_verison(os){}

	void show_Details() {
		cout << "Device ID: " << Device_ID << endl;
		cout << "Model Name: " << Model_Name << endl;
		cout << "Os Version: " << OS_verison << endl;
	}
};

class SamOS: public MobilePhone {
	float OS_verison;
public:
	SamOS(string a, string b, string c, float price, string res, int ram, int storage, float os) :
		MobilePhone(a, b, c, price, res, ram, storage), OS_verison(os) {}

	void show_Details() {
		cout << "Device ID: " << Device_ID << endl;
		cout << "Model Name: " << Model_Name << endl;
		cout << "Os Version: " << OS_verison << endl;
	}
};


int main() {

	Ledtv lt1("XYZ-19", "2021-12-12", "Somsung-G249", 45999.9, "800*600");
	SamOS smos1("AB123", "2022-05-05", "Ephone 11", 129999.9, "55mp", 6, 256, 11.1);

	smos1.show_Details();
	cout << smos1.getCount();
}