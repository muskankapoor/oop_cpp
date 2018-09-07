// Example program
#include <iostream>
#include <string>
using namespace std;


void swap(int arr[], int first, int second){
    cout<<arr[first]<<" "<<arr[second]<<endl;
    int temp=arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
    cout<<arr[first]<<" "<<arr[second];
    
}

int main(){
    int testArray[]={7, 9, 4};
    swap(testArray, 0, 1);
}
