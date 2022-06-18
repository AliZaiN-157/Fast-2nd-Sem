#include <iostream>
#include <list>
using namespace std;


// Parent Class
class YouTubeChannel {
	// Private Class
	private:
	    // Attributes
		string OwnerName;
		int SubscriberCount;
		list<string> PublishVideoTitles;
    protected:
        string Name;

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

// Child Class
class PodacastYtChannel:public YouTubeChannel{

    public:
        PodacastYtChannel(string name, string ownername):YouTubeChannel(name, ownername){

        }
        // this method is for only child class not for parent class.
        void newPodcast(){
            cout<< Name <<" will release new Podcast every Monday......!"<<endl;
        }
};

int main(){

    PodacastYtChannel podcastytChannel("Daily Podcast", "ben");
    podcastytChannel.subsribe();
    podcastytChannel.subsribe();
    podcastytChannel.getInfo();
    podcastytChannel.newPodcast();
}


