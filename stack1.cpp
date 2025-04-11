#include <iostream>
using namespace std;

//STACK: LIFO


#define SIZE 100; // size of stack

class stack{
    public:

    int array[SIZE]; //array to store stack
    int top;

    stack(){// constructor
        top=-1; //initially empty stack
    }

    // isEmpty operation to check if stak is empty
    bool isEmpty(){
        return top=-1;
    }
    //isFull operation to check if stack is full
    bool isFull(){
        return top=SIZE-1; // size -1 q k index zero se start hota hai
    }

    //Push operation to add elements into stack
   void push(int value){
    if(isFull()){
        cout<<"Stack Overflow! Elements cant be pushed."<<endl;
        return;
    }
    else{
        array[++top]=value;
        cout<<"Value pushed into stack!"<<endl;
    }
   }
   //Pop operation to remove and return the top element
   void pop(){
    if(isEmpty()){
        cout<<"Stack Underflow! Nothing to pop"<<endl;
        return;

    }
    else{
        cout<<array[top--]<<" popped from stack"<<endl;
    }
   }

   //Peek operation to return the top element without removing

   void peek(){

   }






}