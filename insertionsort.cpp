#include <iostream>
using namespace std;

int main(){
    int size;

    cout<<"Enter the size of an array:";
    cin>>size;

    int array[size];
    //taking input of the elemnts

     // Taking input from user
     for (int i = 0; i < size; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    //applying insertiom sort logic
    for (int i=1; i<size; i++){
        int current=array[i];
        int j=i-1; // to compare the elemenst at the left of the currrent

        while(j>=0 && array[j]>current){// agar left pe koi element current se bara hoga to usko right pe shift 
            //krdenge or then wo element current bn jayega
            array[j+1]=array[j];
            j--; //moving left to check the next elemnt
            array[j+1]=current;
               }
    }

    //dispkaying sorted array
    cout<<"Sorted array:";
    for(int i=0; i<size; i++){
        cout<<array[i];
    }

    return 0;
}