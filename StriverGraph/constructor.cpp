#include<iostream>
#include<list>
using namespace std;

class Naveen{
 public:
  string Name;
  string Ownername;
  int SubsCount;
  list<string> PublishVideoTitles;

  // This is Constructor
  Naveen(string name, string ownerName) {
    Name = name;
    Ownername = ownerName;
    SubsCount = 0;
  }

  void getInfo(){
    cout << Name << endl;
    cout << Ownername<< endl;
    cout << SubsCount<< endl;
    for(string videoTitle: PublishVideoTitles){
      cout << videoTitle << endl;
    }
  }
};


int main(){

    Naveen nav("Titan", "Naveen Bisht");
    nav.PublishVideoTitles = {"hello world", "super sonic"};
    nav.PublishVideoTitles.push_back("hello naveen");
    nav.getInfo();
    cout << "Program ends here" << endl;
    return 0;
}

