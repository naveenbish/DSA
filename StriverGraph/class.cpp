#include<iostream>
#include<list>
using namespace std;

class Naveen{
 public:
  string Name;
  string Ownername;
  int SubsCount;
  list<string> PublishVideoTitles;
};


int main(){

    Naveen nav;
    nav.Name = "Titenl";
    nav.Ownername = "Naveen Bisht";
    nav.SubsCount = 200000;
    nav.PublishVideoTitles = {"hello world", "super sonic"};
    cout << nav.Name << endl;
    cout << nav.Ownername<< endl;
    cout << nav.SubsCount<< endl;
    
    for(string videoTitle: nav.PublishVideoTitles){
      cout << videoTitle << endl;
    }

    return 0;
}

