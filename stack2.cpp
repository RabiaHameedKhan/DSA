#include <iostream>
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
        cout<<val<<" is inserted at the end"<<endl;
    }

    void insertAtStart(int val){
        if(isFull()){
            cout<<"Stack overflowed"<<endl;
            return;
        }

        for(int i=top+1; i>0; i--){
            array[i]=array[i-1]; // loop last index k age se chalna shuru krega or sare elements o right pe 
            //shift krta jayega take bilkul start me 0 index pe element inseet kr saken
        }
        array[0]=val;
        top++; // q k ab ek or element add ho chuka to top ka num barh jayega
        cout<<val<<" insertef at the start of the stack"<<endl;
    }

    void insertAtRandom(int val, int pos){
        if(isFull()){
            cout<<"Stak overflowed"<<endl;
            return;
        }

        if(pos<0 || pos>top+1){// so that the gapis not created which is not allowed in stack/rray
            cout<<"invalid position"<<endl;
            return;
        }

        for(int i=top+1; i>pos; i--){
            array[i]= array[i-1];
        }

        array[pos]=val;
        top++;
        cout<<val<<" is inserted at given posotion"<<endl;
    }

    // delete at end
    void deleteAtEnd(){
        if(isEmpty()){
            cout<<"Stack is underflow, nothing to deleet"<<endl;
            return;
        }
        cout<<array[top--]<<" deleyted from end"<<endl;
    }

    //delete at start
    void deleteAtStart(){
        if(isEmpty()){
            cout<<"nothing to delete"<<endl;
            return;
        }

        cout<<array[0]<<" deleted from start"<<endl;
        for (int i=0; i<top; i++){
            array[i]=array[i+1];
        }

        top--;
    }

    //delete at ransom position
    void deleteAtRandom(int pos){
        if(isEmpty()){
            cout<<"nothing to delete<"<<endl;
            return;
        }

        if(pos<0 || pos>top){
            cout<<"invaliud position"<<endl;
            return;
        }
        cout<<array[pos]<<" deleted from "<<pos<<endl;
        for(int i=pos; i<top; i++){
            array[i]=array[i+1];
        }

        top--;
    }

    void display(){
        if(isEmpty()){
            cout<<"nothing to display"<<endl;
            return;
        }

        cout<<"elememts: ";
        for(int i=0; i<=top; i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s;

    s.insertAtEnd(10);
    s.insertAtEnd(20);
    s.insertAtEnd(30);

    s.insertAtStart(5);
    s.insertAtRandom(15, 2);

    s.display();

    s.deleteAtStart();
    s.deleteAtEnd();
    s.deleteAtRandom(1);

    s.display();

    return 0;
}
