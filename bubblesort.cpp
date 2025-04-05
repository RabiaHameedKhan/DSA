#include <iostream>
using namespace std;

int main(){
    int size;

    cout<<"Enter size of an array: ";
    cin>>size;

    int array[size];

    //Taking input for array
    cout<<"Enter elements of an array: ";
    for(int i=0; i<size; i++){
        cout<<"Enter element "<<i+1<<":";
        cin>>array[i];

    }
    //Applying the bubble sort logic
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(array[j]>array[j+1]){
               int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    // Displaying sorted array
    cout<<"Sorted Array: ";
    for(int i=0; i<size; i++){
        cout<<array[i];
    }
}