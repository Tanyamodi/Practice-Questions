#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key){
    
    if(start >= end){
        return -1;
    }
    int mid = start + (end - start)/2;
    if(arr[mid]==key){
        return mid;
    }
    
    if(arr[mid]>key){
        return binarySearch(arr, start, mid-1, key);
    }
    
    if(arr[mid]<key){
        return binarySearch(arr, mid+1, end, key);
    }
    return -1;
}
int main(){
    int arr[]={4,5,7,9,13};
    int n=5;
    cout<<binarySearch(arr, 0, n-1, 13);
    return 0;
}