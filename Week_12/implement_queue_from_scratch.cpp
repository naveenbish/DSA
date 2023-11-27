#include<iostream>
using namespace std;

// Implementing Queue from Scratch : We can create it using Link list and also with Array. Its on you.

// Class
class queue_building{
  public:
    int* q;
    int size; 
    int front;
    int rear;
  
  queue_building(int size){
    q = new int[size];
    this->size = size;
    front = -1;
    rear = -1;
  }

  // push value from the Queue
  void push_q(int value){
    if(front==-1)
      front++;

      rear++;
      q[rear] = value;
      size = rear + 1;
  }

  // pop value from the Queue
  void pop_q(){
    if(rear==-1)
      cout << "Queue is Empty." << endl;
    else{
      rear--;
      size = rear + 1;
    }
  }

  void print_queue(){
    
    if(rear == -1)
      cout << "Queue is empty.";
    else{
      for(int i=0;i<size;i++)
      cout << q[i] << " ";
    }
    cout << endl;
  }

  // Size of Queue
  int size_q(){
    size = rear + 1;
    return size;
  }

  // Print front element in Queue
  void front_q(){
    if(front == -1)
      cout <<  "Queue is Empty." << endl;
    else
      cout << q[front] << endl;
  }

  // Print rear elemnt in Queue
  void back_q(){
    if(rear == -1)
      cout << "Queue is Empty." << endl;
    else
      cout << q[rear] << endl;
  }

  bool empty_q(){
    if(rear == -1)
      return true;
    else
      return false;
  }

};



int main() {

  queue_building q(5);

  // Add element in Queue
  q.push_q(10);
  q.push_q(20);
  q.push_q(30);
  q.push_q(40);
  q.push_q(50);
  q.pop_q();
  cout << "front ele : ";
  q.pop_q();
  q.front_q();
  cout << "back ele : ";
  q.back_q();
  cout << "Size : " << q.size_q() << endl;
  cout << "Queue is Empty or not : " << (q.empty_q()?"Empty":"Not Empty") << endl;
  cout << "Element in Queue : ";
  q.print_queue();
  return 0;
}