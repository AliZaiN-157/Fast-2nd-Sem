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

};

int main(){

	YouTubeChannel ytChannel;
	ytChannel.Name = "Code with Ali";
	ytChannel.OwnerName = "Ali Zain";
    ytChannel.SubscriberCount = 50;
    ytChannel.PublishVideoTitle = {"Python for Beginners", "React for Beginners", "Js for Beginners"};

    cout<< "Name: "<< ytChannel.Name << endl;
    cout<< "Owner Name: "<< ytChannel.OwnerName << endl;
    cout<< "Subscribers: "<< ytChannel.SubscriberCount << endl;
    cout<< "Videos: " << endl;
    for(string videoTitle: ytChannel.PublishVideoTitle){
        cout<< videoTitle << endl;
    }
}
