#include<iostream>
using namespace std;

// Implementing Queue from Scratch : We can create it using Link list and also with Array. Its on you.

// Class
class queue_building{
  public:
    int front = -1;
    int rear = -1;    
    // int size = rear + 1;
    int size = 200; // Check with the Size, If you will set it then The code will work without any memory issue but in case of defining the size low and then pushing more value can cause issues with the memory.
    int* q = new int[size];

  // queue_building(int size){
  //   q = new int[size];
  //   this->size = size;
  //   front = -1;
  //   rear = -1;
  // }

  // push value from the Queue
  void push_q(int value){
    if(front==-1)
      front++;

    rear++;
    q[rear] = value;
    size = rear - front + 1;
  }

  // pop value from the Queue
  void pop_q(){
    if(rear==-1){
      cout << "Queue is Empty." << endl;
      return;
    }      
    if(rear == front){
      front--;
      rear--;
      size--;
      return;
    }
    if(rear==-1)
      cout << "Queue is Empty." << endl;
    else{
      front++;
      size--;
    }
  }

  void print_queue(){
    
    if(rear == -1)
      cout << "Queue is empty.";
    else{
      for(int i=front;i<=rear;i++)
      cout << q[i] << " ";
    }
    cout << endl;
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

  // Size of Queue
  int size_q(){
    if(rear == -1)
      return 0;
    return size;
  }

};



int main() {

  queue_building q;

  // Add element in Queue
  q.push_q(-1);
  q.push_q(20);
  q.push_q(30);
  q.push_q(40);
  q.push_q(50);
  q.push_q(60);
  // q.pop_q();
  q.pop_q();
  cout << "front ele : ";
  q.front_q();
  cout << "back ele : ";
  q.back_q();
  cout << "Size : " << q.size_q() << endl;
  cout << "Queue is Empty or not : " << (q.empty_q()?"Empty":"Not Empty") << endl;
  cout << "Element in Queue : ";
  q.print_queue();
  return 0;
}