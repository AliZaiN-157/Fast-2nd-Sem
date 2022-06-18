#include<iostream>
#include<list>

using namespace std;

class studentSociety{

    string society_name;
    string faculty_head;
    string president;
    string general_secretary;
    float Budget;
    list<string> events;

public:

    // 1. User-Defined Constructor
    studentSociety(){
        cout << "Enter Society Name: ";
        getline(cin,society_name);

        cout << "Enter Faculty Head: ";
        getline(cin, faculty_head);


        cout << "Enter President Name: ";
        getline(cin, president);

        cout << "Enter General Secretary: ";
        getline(cin, general_secretary);

        cout << "Enter Budget: ";
        cin >> Budget;
		
		cin.ignore();
    }
    // 2. Parameterized Constructor
    studentSociety(string society_name, string faculty_head, string president, string general_secretary ,float Budget){
        this->society_name = society_name;
        this->faculty_head = faculty_head;
        this->general_secretary = general_secretary;
        this->president = president;
        this->Budget = Budget;
        
    }

    // Poll Function

    string* Poll(){
    	
        string *poll = new string[2];

        cout << "Enter President Name: ";
        getline(cin, poll[1]);

        cout << "Enter General Secretary Name: ";
        getline(cin, poll[0]);
		
		cin.ignore();
        return poll;
    }

    // 3. Constructor with few parameters and Poll function
    studentSociety(string society_name, string general_secretary, float Budget){
        this->society_name = society_name;
        this->faculty_head = faculty_head;
        this->Budget = Budget;

        string *poll = Poll();
        general_secretary = poll[0];
        president = poll[1];
    }


    // modifiers

    void set_society_name(){
        cout << "Enter The Society Name: ";
        cin.ignore();
        getline(cin, society_name);
    }

    void set_faculty_head(){
        cout << "Enter The Faculty Head Name: ";
        cin.ignore();
        getline(cin, faculty_head);
    }

    void set_general_secretary(){
        cout << "Enter The General Secretary Name: ";
        cin.ignore();
        getline(cin, general_secretary);
    }

    void set_president(){
        cout << "Enter The President Name: ";
        cin.ignore();
        getline(cin, president);
    }

    void set_Budget(){
        cout << "Enter The Budget: ";
        cin.ignore();
        getline(cin, president);
    }

    // getters
    string show_society_name(){
        return society_name;
    }

    string show_faculty_head(){
        return faculty_head;
    }

    string show_president(){
        return president;
    }

    string show_general_secretary(){
        return general_secretary;
    }

    float show_Budget(){
        return Budget;
    }

};

int main(){
	studentSociety ss1; // 1st Constructor
    studentSociety ss2("ACM", "ali","zain","hassan",20000.00); // 2nd Constructor
    studentSociety ss3("Procom", "ali", 50000.01); // 3rd Constructor
    
    // Demo
    
    cout << ss1.show_society_name() << endl;
	cout << ss2.show_society_name() << endl;
	cout << ss3.show_society_name() << endl; 
}
