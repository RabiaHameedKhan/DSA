#include <iostream>
using namespace std;


// ek merge ka function bnayenge jo 2 already sorted arrays ko compare krke merge krega into single array
void merge(int *array, int low, int mid, int high){// for dynamic array we have used *
    int ls= mid-low+1; //size of left subarray
    int rs= high-mid; // size of right sub array

    //size banane k bad temp sub array create krenge on the basis of size (ls, rs)

    int *left= new int [ls];
    int * right=new int [rs];

    // ab in arrays me values store krwayenge 
    //main array ki half values right array me or half values left array me copy krenge

    for(int i=0; i<ls; i++){
        left[i]= array[low +i]; // 0 index se le k mid(i) tk ki sari values means left values
    }
    for(int j=0; j<rs; j++){
        right[j]=array[mid +1+j]; // mid +1 islye use kia hai q k mid k bad wale sare elements store krwane hain
        // or +j bhi isilye kr rhe take mid pe store na hon uske age se right pe store hon
    }

    // ab temp arrays ki sorting kr kr ke unko sath hi main array me store krwate jayenge

    int i=0, j=0, k-=low;
    while(i <ls && j< rs){// checking k index sizes se zyda na hon
        if(left[i]<= right[j]){ // dono sub arrays k hr element ko compare krenge
            array[k++]= left[i++];// agr chota element mila to left side pe store krwadenge
        }
        else{
            array[k++]= right[j++]; /// agar bara element mila to right side pe store krwadenge
        }
    }

// ab remaining elements ko bhi main array me store krwayenge q k uppar wale loop me zaroori nai k dono sides 
// k sare elements store hojayen agar ek side pehle khatam hogai to loop break hojayega or dusri side k elements
//bach jayenge

while(i<ls){
    array[k++]=left[i++];
}
while (j<rs){
    array[k++]=right[j++];
}

//ab sare elemets wapas main array me agaye hain to delete the left and right arrays for memory
delete[]left;
delete[]right;

// ab main mergesort ka function bnayenge jo left or right array ko sort krega jinko uppar merge kkia hai
//that function will be recursive(apne apko call krega)

void mergesort(int *array,int  low,int high){
    if(low<high){
        int mid=(low+high)/2;

        mergesort(array, low, mid); //to sort he left part
        mergesort(array, mid+1, high); // to sort right half
        merge(array, low, mid, high); // finally merges the both sides 
    }


}
}

int main(){
    int size;
    cout<<"Enter the size of an array:";
    cin>>size;

    int *array=new int[size]; //creates dynamic array

    //taking input in array
    cout<<"Enter elements:"<<endl;
    for(int i=0; i<size; i++){
        cout<<"element "<<i<<":";
        cin>>array[i];
        }

        mergesort(array, 0, size-1); // 0 is low index , size-1 is last/high index bcz array 0 se start  hota

        cout<<"Sorted arrray:";
        for(int i=0; i<size; i++){
            cout<<array[i];
        }


        return 0;
}