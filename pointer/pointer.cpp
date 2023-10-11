#include<iostream>
using namespace std;

int main() {

  // int a = 5;
  // char b = 'a';
  // long c = 10;
  // int* ptr = &a;
  // char* ptr3 = &b;
  // long* ptr4 = &c;
  // int** ptr2 = &ptr;

  // Null pointer with good practice
  // int d = 100;
  // int* ptr5 = 0;
  // int* ptr5 = nullptr;
  // cout << ptr5 << endl;
  // ptr5 = &d;
  // cout << ptr5 << endl;

  // cout << "ptr : " << ptr << endl;
  // cout << "&a : " << &a << endl;
  // cout << "*ptr : " << *ptr << endl;
  // cout << "ptr2 : " << ptr2 << endl;
  // cout << "&ptr : " << &ptr << endl;
  // cout << "*ptr2 : " << *ptr2 << endl;
  // cout << "**ptr2 : " << **ptr2 << endl;

  // All sizes are equal... why?? Because pointer size is 8 for 64 bytes architecture and 4 for 32 bit architecture
  // cout << sizeof(ptr) << endl;
  // cout << sizeof(ptr3) << endl;
  // cout << sizeof(ptr4) << endl;

  // Question 1: int a = 100; int* ptr = &a; cout << a + 1; cout << ptr + 1; Ans 101, if ptr = 104 then ans is 108 because int carries 4 bytes of value.

  // Question 2: int a = 100; int* ptr = &a; a = a+1; cout << *ptr + 1;

  // Question 3 : int a = 100; int* ptr = &a; //address &a = 104; // address &ptr = 208
  // cout << a,&a,*a,ptr,*ptr,&ptr,*ptr++,++*ptr,*ptr=*ptr/2,*ptr=*ptr - 2;
  // ans     100,104,error,104,100,208,100,102,51, 

  // Question 4 : int a = 5; int* p = &a; int *q = p; //address &a = 1008; // address &p = 216 // adddress &q = 318
  // cout << a = 5, &a = 1008, *a = error , p = 1008, &p = 216, *p = 5, q = 1008, &q = 318, *q = 5;

  // Question 5 : int a = 50; int* p = &a; int *q = p, int *r = q; //address &a = 104; // address &p = 420 // adddress &q = 516 // address &r = 712
  // cout << a = 50, &a = 104, *a = error , p = 104, &p = 420, *p = 50, q = 104, &q = 516, *q = 50, r = 104, &r = 712 , *r = 50;

  // int ab = 5;
  // int* point = &ab;
  // point = point + 1;
  // cout << point << endl;

  // Yo 
  // int arr[5] = {1,2,3,4,5};
  // int* ptr = arr;
  // cout << "Address of arr : " << ptr << endl;
  // cout << "Now adding 4bytes to it means " << ptr << " + 4 = ";
  // ptr = ptr + 1;
  // cout << ptr << endl;
  // cout << "value of *ptr : " << *ptr << endl;

  // int* q = arr + 1;
  // // cout << *(q + 4);
  // cout << sizeof(arr) << endl; Ans = 20 // because int 4bytes = 
  // cout << sizeof(&arr) << endl; Ans = 8 // because of pointer
  // cout << sizeof(q) << endl; Ans = 8 // because of pointer4

  // char ch[50] = "Naveen";
  // char* cptr = ch;
  // char* cptr = &ch; // not working check it out why??
  // cout << *cptr << endl;

  // char ch = 'a';
  // char *cptr = &ch;
  // cout << *cptr << endl; 

  // char ab[] = "csjcan";
  // cout << ab << endl;
  // int ab[] = {1,2,3,5,6};
  // char ab[] = "abcdef";
  // int length = sizeof(ab)/sizeof(ab[0]);
  // cout << length << endl;
  // for(int i = 0; i < length; i++ ){
  //   cout << ab[i] << " ";
  // }cout << endl;


  // int x = 3;
  // int *point = &x;

  // cout << "x : " << x << endl; // prints 3
  // cout << "&x : " << &x << endl; //prints address of x;
  // cout << "*point : " << *point << endl; //prints address of x;
  // cout << "point : " << point << endl; //prints address of x;
  // cout << "&point : " << &point << endl; //prints address of pointer point;
  // cout << "(*point) + 1 : " << (*point) + 1 << endl; //prints 3 + 1 = 4;
  // cout << "++(point) : " << ++(point) << endl; // point = address of x + 4bytes; and print point
  // cout << "*point/2 : " << (*point)/2 << endl; // updated point value(garbage value) / 2 
  // cout << "*point-2 : " << (*point)-2 << endl; // updated point value(garbage value) - 2
  // cout << *point << endl;

  // int x = 3;
    // int* point = x;  --> ERROR - point is a pointer to x which will always store address. but x is a integer value not a address.
    // int* point = &x;  

    // cout<<"x-> "<<x<<endl;                       //3
    // cout<<"&x-> "<<&x<<endl;                     // address of x
    // cout<<"*x-> "<<*x<<endl;   --> *x will give error bcoz "x" is a it variable not a pointer , so it cannot be dereferenced.
    // cout<<"point-> "<<point<<endl;               // address of x
    // cout<<"*point-> "<<*point<<endl;             //value of x - 3
    // cout<<"&point-> "<<&point<<endl;             //address of pointer "point"
    // cout<<"(*point)+1-> "<<(*point)+1<<endl;     //4
    // cout<<"++(point)-> "<<++(point)<<endl;       // "address of x" + "size of datatype".
    // cout<<"*point = *point/2-> "<< (*point)/2<<endl;     //1
    // cout<<"*point = *point-2-> "<<(*point)-2 << endl ;//1
    // cout << "*point : " << *point << endl;


    //pointer->variables->to store addess of other variables.
     int a = 50;
     int d = 100;
     int c = 10;
     int* ptr1 = &c;
     int* ptr3 = &d;
     int* ptr = &a;    // address of a ko ptr pointer me store kar liya.
    //  int* pointer_name -> pointer to a int variable.

     cout<<"address of a using address of operator-> "<<&a<<endl;   // 0x61ff08
     cout<<"address of a using pointer-> "<<ptr<<endl<<endl;                    // 0x61ff08
    //  address is a hexa-decimal value.


    // <---accessing value of "a" using pointer--->.
     cout<<"a is -> "<<a<<endl; //5
     cout<<"a is -> "<<ptr<<endl;;    //5   ( is a dereference operator gives value of a variable whose address is stored in a pointer).


    //  BAD PREACTISE - ALWAYS AVOID THIS.
      //pointer is declared but not initialzed -> pointer p store a gabage value which is an illegal address and when we try to access this illegal address we will may an error -> it's purely compiler independent. 
    //  cout<<*p<<endl;

    // int* p = 0; //null pointer -> it's better to use null pointer than uninitialized pointer.



    //  <--- SIZE OF POINTER--->

    // size of pointer is system independent -> but in most cases it returns 8.
    // pointers size is independent of data type of a variables. 
    // it's same for every data type.
    // cout<<sizeof(ptr);   //4 

    // <-- few mcqs related questions -->
    int x = 3;
    // int* point = x;  --> ERROR - point is a pointer to x which will always store address. but x is a integer value not a address.
    int* point = &x;  

    cout<<"x-> "<<x<<endl;                       //3
    cout<<"&x-> "<<&x<<endl;                     // address of x
    // cout<<"*x-> "<<*x<<endl;   --> *x will give error bcoz "x" is a it variable not a pointer , so it cannot be dereferenced.
    cout<<"point-> "<<point<<endl;               // address of x
    cout<<"*point-> "<<*point<<endl;             //value of x - 3
    cout<<"&point-> "<<&point<<endl;             //address of pointer "point"
    cout<<"(*point)+1-> "<<(*point)+1<<endl;     //4
    cout<<"++(point)-> "<<++(point)<<endl;       // "address of x" + "size of datatype".
    cout<<"*point = *point/2-> "<< (*point)/2<<endl;     //1
    cout<<"*point = *point-2-> "<<(*point)-2<< endl;  // 1


  return 0;
}