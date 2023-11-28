#include<iostream>
using namespace std;

// Implementing Queue from Scratch : We can create it using Link list and also with Array. Its on you.

// Class
class circular_queue_building{
  public:
    int front = -1;
    int rear = -1;
    int capacity = 10;    
    int size = 0;
    int* q = new int[capacity];
    
  // push value from the Queue
  void push_q(int value){
    if(front==-1)
      front++;

    if(rear == capacity-1){
      rear = -1;
    }

    if(size == capacity){
      cout << "Circular loop is full. Will not able to insert : " << value << endl;
      return ;
    }
    else{
      rear++;
      q[rear] = value;
    }

    if(rear >= front)
      size = rear - front + 1;
    else
      size = capacity - front + rear + 1;

  }

  // pop value from the Queue
  void pop_q(){
    if(rear==-1){
      cout << "Queue is Empty." << endl;
      return;
    }      
    if(rear == front){
      front=-1;
      rear=-1;
      size=0;
      return;
    }
    if(front==capacity-1)
      front = 0;
    if(rear==-1)
      cout << "Queue is Empty." << endl;
    else{
      front++;
      size--;
    }
  }

  void print_queue(){
    
    if(size == 0){
      cout << "Queue is empty.";
      return ;
    }
    
    if(rear >= front){
      for(int i=front;i<=rear;i++)
      cout << q[i] << " ";
    }
    if(rear < front){
      for(int i=front;i<capacity;i++){
        cout << q[i] << " ";
      }
      for(int i=0;i<=rear;i++){
        cout << q[i] << " ";
      }
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

  circular_queue_building q;

  // Add element in Queue
  // q.push_q(10);
  // q.push_q(20);
  // q.push_q(30);
  // q.push_q(40);
  // q.push_q(50);
  // q.push_q(60);
  // q.push_q(70);
  // q.push_q(80);
  // q.push_q(90);
  // q.push_q(100);
  q.pop_q();
  // q.push_q(110);
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