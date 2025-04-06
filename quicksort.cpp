#include <iostream>
using namespace std;

//ek swap ka function bna lenge take jahan bhi swapping use honi ho wahan isko call krlen

void swap(int &a, int &b){
    temp=a;
    a=b;
    b=temp;
}

// ek partition ka function bna leneg take jb bhi pivot element ko correct position pe move krne ki zarorat 
// pare to isko call krlen

int partition(int array[], int low, int high) {// low means 0index, high means last index
    int pivot=array[high]; // assigned last element of array as pivot ye apni marzi hoti hai 
    int i=low-1; // ye islye kia q k abhi filhal hmne aisa koi element chck nai kia jo pivot se chota ho
    // to it means smaller than pivot" part is empty right now. ab jese hi koi samller element milega
    // to hm i ko ++ krdenge jo -1 se 0 hojayega or smaller element array ki 0 index pe store hojayga

    for(int j= low; j<high; j++){ // array ko 0 index(low) se chalana start krenge
        if(array[j]< pivot){ // comparing the smaller element than pivot
            i++;
            swap(array[i], array[j]); // agar element smaller ho to usko i bnado using swap function
        }
        swap(array)
    }
} 
