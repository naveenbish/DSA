// Linked list : It is a data structure.
// read about : What is the use of linked list in storange management in OS?
// LInked list don't need continous memory. It works on non-continous memory. So, waste of memory is less then array.
// LInked list : Collection of nodes. Example : (maala-collection of moti), (boxes of Train), 
// Each node generally containes data with address. (int, *ptr) -> (int, *ptr) -> (int, *ptr)
// same as int *ptr we use node* ptr for linked list.
// In linked list the last pointer points to null pointer // Good Practice.
// LInked listed Magical LIne : Linked list is hindi. (By love babbar bhaiya)
// Complexity while insertion/shift => O(1)
// Dynamically shrink and grow
// Linked list is based on Address Concept
// There are some corner cases in LL where some test cases will stuck but we will do around 10 to 11 questions and they will manage everything. You are ready to select.

// Singly LL -> ()->()->()->()->()->()->X
// Doubly LL -> X<-()<->()<->()<->()<->()<->()<->X
// Circular LL -> end<-()->()->()->start
// Doubly Circular LL -> Pending...
// 

//Important -> Never use Original pointer to print function while sending Node* head (same as done in printLL and printLength). Conclusion : use pass by value.

// How we are learning...
// Create linked list
// Print Linked list
// Print the length
// Insertion at head(start) / tail(end) / (anywhere inbetween or insert at position -> [pending])
// We can also createTail function for finding tail.

// Important : pass head with reference while inserting

// Important cases need to take care of : 
// -> if linked list is empty then how we will insert. // Empty LL means head is empty and tail is empty means head == tail.
 


#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;

    Node() { // Default Constructor
      this->next = NULL;
    }

    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};


// Print Linked List
void printLL(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL";
}

// Print the length of LInked List
int printLength(Node* head){
  int count=0;
  Node* temp = head;
  while (temp != NULL)
  {
    count++;
    temp = temp -> next;
  }
  return count;
}

// Insertion at head(starting point)
void insertAtHead(Node* &head, int data, Node* &tail){
  
  if(head==NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else{
    // Create new Node
    Node* newNode = new Node(data);
    //Attach new node
    newNode->next=head;
    //update head
    head = newNode;
  }
  

}

// Insertion at Tail(ending point)
void insertAtTail(Node* &head, int data, Node* &tail){
  
  if(head==NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
  else{
    // Create new Node
    Node* newNode = new Node(data);
    //Attach new node
    tail->next=newNode;
    //update head
    tail = newNode;
  }
  

}


void createTail(Node* head, Node* &tail){
  Node* temp = head;
  while(temp != NULL){
    tail = temp; 
    temp = temp->next;
  }
  cout << tail->data << endl;
}


int main(){

  Node* first = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);

  first->next = second;
  second->next = third;
  third->next = fourth;

  Node* head = first;
  Node* tail = fourth;
  printLL(head);
  cout << endl;
  cout << "Length : " << printLength(head) << endl;
  insertAtHead(head, 0, tail);
  insertAtTail(head, 50, tail);
  printLL(head);
  cout << endl;
  cout << "Length : " << printLength(head) << endl;
  createTail(head, tail);


  return 0;
}