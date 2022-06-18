#include <iostream>

using namespace std;

class Weapons{
	public:
		void WeaponsDescription(){
			cout << "This is Weapon" << endl;
		}
};

class HotWeapons:public Weapons{
	public:
		void HotWeaponsDescription(){
			cout << "This is HotWeapon" << endl;
		}
};

class Bomb: public HotWeapons{
	public:
		void BombDescription(){
			cout << "This is HotWeapon" << endl;
		}
		
};

class NuclearBomb: public Bomb{
	public:
		void NuclearBombDescription(){
			cout << "This Is Nuclear Bomb" << endl;
		}
};

int main(){
	NuclearBomb nb;
	nb.NuclearBombDescription();
	nb.BombDescription();
	nb.HotWeaponsDescription();
	nb.WeaponsDescription();
}
