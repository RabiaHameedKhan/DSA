#include <iostream>
using namespace std;

void quicksort(int array[], int low, int high){
    if(low<high){
        int pivot=array[high]; //last element ko pivot bnayenge
        int i=low-1; //low -1 islye q k low yani(0)index pe already koi element para hua hoga to jb
        // hamen sorted element dalna hoga at correct position to  shifting kr ke bhi jaga khali nai hogi
        //islye array start hone se pehle hi se start krenge mtlb -1 take jb shift ho to 0 index and so on khali mil jaye
        int temp; // this is made for swapping
    

    for(int j =low; j<=high-1; j++){// loop ko 0 index se chalayange till high -1 mtlb pivot se pehle wale 
        //element tak (2nd last) q k pivot element ko use nai krna wo already compare horaha sbke sath
        if(array[j]<pivot){// array k hr element ko pivot se compare krenge agr chota hua to index(i) ko shift
            //(++) krdenge or ph us index pe jo element hoga usko chote element se swap krdenge
            // remember abhi pivot element se swap nai hua just us element ki index change ki hai jo chota tha
            i++;
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;

            //Lets dry run
            //Array k hr elemnet (except last /high/pivot) ko pivot se compare krenge agr chota hue to 
            //index(i) me increment krenge , i ko hmne low -1 se initialize krwaya tha means -1 tha , ab 
            // after ++ i will be 0 means index 0 hogai 
            // ab 0 index pe jo element para hai mtlb array[i] usko array[j] yani us element se swap
            //krwa denge jo hamen pivot se chota mila tha q k hamen chote elemens ko 0 index se rkhna 
            // start krna hai for sorting
        }



    }

    //Placing the pivot at corrrect position
   temp=array[i+1];
   array[i+1]=array[high];
   array[high]=temp;

// ye hmne islye krwaya hai q k jb loop k sare element s compare hojayenge to pivot se chote elements low 
// low (0 index) se le k i tk ajayenge or pivot se  bare elements uske bad to i will act as a boundary between 
// smaller and bigger elements jb k pivot element abhi bhi high yani end me hi hai to uski sahi jaga smaller or
//bigger elemenst k bech me hai
// low se i tk sare smaller elements the
// i se high-1 tk bigger elements
// or high pe pivot para hua tha
// it means pivot ko inke bech me ana hai that is i+1 index 

//Recursive calls for quicksort
quicksort(array, low, i);// sorting the left sub array low to i
quicksort(array, i+2, high);// sorting the right sub array i+2 to high

// i+2 islye lia q k
//  i tk small elemenst the jiske lye left sorting recursion lagi
// i+1 pe pivot para hua jisko sort kren ki neeed nai wo apni correct jaga pe hai
// to isilye i+2 will act as a low for right side sorting
}
}

int main(){
    int size;

    cout<<"Enter the size of an array: ";
    cin>>size;

    int array[size];

    cout<<"Enter "<<size<<"elements:";
    for (int i=0; i<size; i++){
        cout<<"Element "<< i+1<<":";
        cin>>array[i];
    }

    //calling quicksort function

    quicksort(array, 0, size-1); // size -1 islye q k array 0 se start hoti hai

    cout<<"Sorted Array: ";
    for(int i=0; i<size; i++){
        cout<<array[i];
    }


    return 0;
}