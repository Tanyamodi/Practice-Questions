#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool checkSorted(int arr[], int n, int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return checkSorted(arr, n, i+1);
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int i=0;
    
    
    if(checkSorted(arr, n, i)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}