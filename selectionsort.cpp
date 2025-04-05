#include <iostream>
using namespace std;

int main(){
    int size;

    cout<<"Enter the size of an arrray: ";
    cin>>size;

    int array[size];

    //Taking input of elemets
    cout<<"Enter array elemennts:";
    for(int i=0; i<size; i++){
        cout<<"element "<<i+1<<":";
        cin>> array[i];
    }

    // Applying selection sort logoic
    for(int i=0; i<size-1; i++){
        int minIndex=i; //Assueme current index is smallst

        for(int j=i+1; j<size; j++){// j+i+1 means the element right next to minIndex element
            if(array[j]<array[minIndex]){
                minIndex=j;
            }
        }

        if(minIndex!=i){
            int temp= array[i];
            array[i]=array[minIndex];
            array[minIndex]=temp;
        }
    }

    cout<<"Sorted Array: ";
    for (int i=0; i<size; i++){
        cout<<array[i];
    }
   
}