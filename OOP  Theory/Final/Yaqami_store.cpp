#include <iostream>
#include <string>

using namespace std;

class Readers{
	protected:
		string name;
		float rate;
		
		public:
			Readers();
			Readers(string name){
				this->name = name;
				this->rate = 0.0;
			}
			
			void give_rating(float r){
				rate = r
			}
			
			float check_rating(){
				return rate;
			}
			
			
			
};


class MangaWorm: public Readers{
};

class ComicNerd: public Readers{
};


class StudyGeek: public Readers{
};

class Freader: public MangaWorm, public ComicNerd, public StudyGeek{
	
};
