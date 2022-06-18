#include <iostream>
#include <list>
using namespace std;

// encapsulation says your properties should be private, they should not be accessible outside the class.
// you expose public method to change the data of the properties.

class YouTubeChannel {
	// Private Class
	private:
	    // Attributes
		string Name;
		string OwnerName;
		int SubscriberCount;
		list<string> PublishVideoTitles;

    public:
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
            for(string videoTitle: PublishVideoTitles){
                cout<< videoTitle << endl;
            }
            cout<<endl;
        }
        void subsribe(){
            SubscriberCount++;
        }
        void unsubsribe(){
            if(SubscriberCount > 0)
                SubscriberCount--;
        }
        void publishVideo(string title){
            PublishVideoTitles.push_back(title);
        }
};

int main(){

    // How to set constructor
	YouTubeChannel ytChannel("Code with Ali", "Ali Zain");
    ytChannel.publishVideo("JavaScript");
    ytChannel.publishVideo("Python");
    ytChannel.publishVideo("React");

    // How to call method
    ytChannel.subsribe();
    ytChannel.subsribe();
    ytChannel.unsubsribe();
    ytChannel.getInfo();
}


