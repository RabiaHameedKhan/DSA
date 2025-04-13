# include <iostream>
using namespace std;

//Array based insertion & deletion in Stack

#define SIZE 100

class Stack{
public:
    int array[SIZE];
    int top;
    
    Stack(){
         top=-1; // initialized to 0 by constructor
    }

    bool isEmpty(){
        return top==-1;
    }

    bool isFull(){
        return top==SIZE-1;
    }

    //Insertion at End 

    void insertAtEnd(int val){
        if(isFull()){
            cout<<"Stack is overflowed , aur mt dalo"<<endl;
            return;
        }

        array[++top]=val;
        cout<<val<<"is inserted at the end"<<endl;



    }

    void insertAtStart(int val){
        if(isFull()){
            cout<<"Stack overflowed"<<endl;
        }

        for(int i=top; i<)
    }




};