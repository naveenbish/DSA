#include<iostream>
#include<list>
using namespace std;

class Errorop{
public:
  list<int> Numall;
};

int main(){
  Errorop obj;
  obj.Numall = {1,2,3,4,5,6,7,8,9,10};

  for(int i:obj.Numall){
    cout << i << endl;
  }

  return 0; 
}
