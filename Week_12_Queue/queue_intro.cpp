#include<iostream>
#include<queue>
using namespace std;


// Queue -> FIFO .. First in First Out 


int main() {

  // Creation
  queue<int> q;

  // Insertion
  q.push(5);

  // Size 
  cout << "Size of queue : " << q.size() << endl;

  // Empty : if empty or not
  cout << "Empty : " << (q.empty()?"Empty":"Not Empty") << endl;

  // Removal of element
  cout << "Element Poped" << endl;
  q.pop();

  // Size 
  cout << "Size of queue : " << q.size() << endl;

  // Empty : if empty or not
  cout << "Empty : " << (q.empty()?"Empty":"Not Empty") << endl;


  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);

  // Print front element of the queue;
  cout << "Front element : " << q.front() << endl;  
  
  // Print rear element [means last element] of the queue;
  cout << "Last element : " << q.back() << endl;

  return 0;
}