#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class dayType{

	string days[7];
	string currentDay;
	string nextDay;
	string prevDay;
	int initialDay;
		   

	public:
		
		// Default constructor
		dayType(){
		    days[0] = "Sun",
		    days[1] = "Mon",
		    days[2] = "Tues",
		    days[3] = "Wed",
		    days[4] = "Thurs",
		    days[5] = "Fri",
		    days[6] = "Sat",
		    initialDay = 0;
		    currentDay = days[initialDay];
		    nextDay = days[1];
		    prevDay = days[6];
		}
		
		// Parametrized Constructor
		dayType(string a, string b, string c, string d, string e, string f, string g){

		    days[0] = a;
		    days[1] = b;
		    days[2] = c;
		    days[3] = d;
		    days[4] = e;
		    days[5] = f;
		    days[6] = g;
		    initialDay = 0;
		    currentDay = days[initialDay];
		    nextDay = days[1];
		    prevDay = days[6];
		}
		
		// setters
		void setCurrentDay(string val){
		    currentDay = val;
		    
		    for (int i = 0; i<7 ; i++){
		    	if(val == days[i]){
		    		initialDay = i;
		    		break;
				}
			}
		}
		
		void findDay(string new_day, int d){
			
			int new_d;		
			new_d = d % 7;
			new_day = days[(initialDay+new_d)%7];
			cout << "After " << d << " Days it's: "<< new_day << endl;
		}
		
		// getters
		void toDay(){
		    cout << endl <<"Today is " << currentDay;
		}

		void NextDay(){

			if (initialDay >= 6){
				nextDay = days[0];
			}
			else{
				nextDay = days[initialDay + 1];
			}
			cout << endl <<"Next Day will be: " << nextDay;
		}
		
		void PrevDay(){
			
			if (initialDay <= 0){
				prevDay = days[6];
			}
			else{
				prevDay = days[initialDay - 1];
			}
			cout << endl <<"Previous Day was: " << prevDay;
		}
		
};

int main(){

	int options;
	
	dayType DAY; // default constructor
	dayType DAY1("Mon","Tues","Wed", "Thurs", "Fri", "Sat", "Sun"); // Parameterized constructor
	
	while(1){
		
		system("cls");
		cout << "Day Menu" << endl << endl;
		cout << "1. Set Day" << endl
			 << "2. Today" << endl
			 << "3. Next Day" << endl
			 << "4. Previous Day" << endl
			 << "5. Find Day" << endl
			 << "6. Exit" << endl;
			 
		
		cin >> options;
		
		switch(options){
			case 1:
				{
					string val;
					cout << "Enter The New Day('Mon', 'Tues'.. etc): "; 
					cin >> val;
					DAY.setCurrentDay(val);
					getch();
					break;
				}
			case 2:
				DAY.toDay();
				getch();
				break;
			case 3:
				DAY.NextDay();
				getch();
				break;
			case 4:
				DAY.PrevDay();
				getch();
				break;
			case 5:
				{
					int d; string new_day;
					cout << endl << "Enter the days: "; 
					cin >> d;
					DAY.findDay(new_day, d);
					getch();
					break;
				}
			case 6:
				return 0;
			
			default:
				cout << "No such options.....";
		}
	}
//	DAY.setCurrentDay("Tues");
//    DAY.toDay();
//    DAY.NextDay();
//    DAY.PrevDay();
//    DAY.findDay();

}
