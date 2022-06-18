#include <iostream>
#include <fstream>

using namespace std;

	// Take a class Participant having three attributes(ID, name and score) and following member functions
	//	Input() function takes data of the objectand stores it in a file name participant.dat
	//	Output() function takes id from userand show respective data of that id.
	//	Max() gives the highest score of the Participant in the file.

class Participant {
	int id;
	string name;
	int score;
	
	public:

		void Input() {
			ofstream fout;
			fout.open("participant.dat", ios::app);
			cout << "Enter ID: ";
			cin >> id;
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter Score: ";
			cin >> score;
			fout << id << " " << name << " " << score << endl;
			fout.close();
		}
		void Output() {
			ifstream fin;
			fin.open("participant.dat", ios::in);
			int id;
			cout << "Enter ID: ";
			cin >> id;
			while(fin >> id) {
				if(id == this->id) {
					fin >> name >> score;
					cout << "ID: " << id << endl;
					cout << "Name: " << name << endl;
					cout << "Score: " << score << endl;
				}
			}
			fin.close();
		}
		int Max() {
			ifstream fin;
			fin.open("participant.dat");
			int id, max = 0;
			while(fin >> id) {
				fin >> name >> score;
				if(score > max) {
					max = score;
				}
			}
			fin.close();
			return max;
		}
		
};

int main() {
	Participant p;
	p.Input();
	p.Output();
	cout << "Max Score: " << p.Max() << endl;
	return 0;
}











