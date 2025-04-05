#include <iostream>
using namespace std;

int main(){
    int size,num;
    
    cout<<"Enter the size of an array:";
    cin>>size;

    int array[size];

    cout << "Enter " << size << " sorted elements:\n";
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    cout<<"Enter the number to search:";
    cin>>num;

    int lower=0;
    int upper=size-1;
    bool found= false;

    while(lower<=upper){
        int mid=(lower+upper)/2;

        if (array[mid]==num){
            cout<<"Num fpoundd at index: "<<mid<<endl;
            found=true;
            break;

        }

        else if(array[mid]<num){
            lower=mid+1;
        }

        else upper=mid-1;
    }

    if(!found){
        cout<<"Num not found";
    }

    return 0;
   

    }