#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
	// Public Class
	public:
	    // Attributes
		string Name;
		string OwnerName;
		int SubscriberCount;
		list<string> PublishVideoTitle;

    // Constructor
    YouTubeChannel(string name, string ownername){
        Name = name;
        OwnerName = ownername;
        SubscriberCount = 0;
    }

    // Method
    void getInfo(){
        cout<< "Name: "<< Name << endl;
        cout<< "Owner Name: "<< OwnerName << endl;
        cout<< "Subscribers: "<< SubscriberCount << endl;
        cout<< "Videos: " << endl;
        for(string videoTitle: PublishVideoTitle){
            cout<< videoTitle << endl;
        }
        cout<<endl;
    }

};

int main(){

    // How to set constructor
	YouTubeChannel ytChannel("Code with Ali", "Ali Zain");
	ytChannel.PublishVideoTitle.push_back("JavaScript");
	ytChannel.PublishVideoTitle.push_back("Python");
	ytChannel.PublishVideoTitle.push_back("React Js");
    YouTubeChannel ytChannel2("Net Ninja", "Shaun");

    // How to call method
    ytChannel.getInfo();
    ytChannel2.getInfo();
}

