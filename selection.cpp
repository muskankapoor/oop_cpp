//selection srot
#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n){
 
    // One by one move boundary of unsorted subarray
    for (int i = 0; i < n-1; i++){
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i+1; j < n; j++){
          if (arr[j] < arr[min_idx]){
            min_idx = j;
	  }
        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);
	}
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
      cout<<arr[i]<<"\n";
    }
    //printf("\n");
}


int main(){
  int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    //printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
