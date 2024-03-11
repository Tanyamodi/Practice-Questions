#include<iostream>
#include<climits>
#include<math.h>
using namespace std;

int climbStairs(int n){
    if(n==0 || n==1){
        return 1;
    }
    
    return climbStairs(n-1) + climbStairs(n-2);
}

void printArray(int arr[], int n, int i){
    if(i>=n){
        return;
    }
    cout<<arr[i]<<" ";
    printArray(arr,n,i+1);
}

void findMax(int arr[], int n, int i, int &maxi){
    if(i>=n){
        return;
    }
    
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    
    findMax(arr, n, i+1, maxi);
}

void findMin(int arr[], int n, int i, int &mini){
    if(i>=n){
        return;
    }
    
    if(arr[i]<mini){
        mini=arr[i];
    }
    
    findMin(arr, n, i+1, mini);
}
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int i=0;
    cout<<"Printing Array: ";
    printArray(arr,n,i);
    
    cout<<endl<<endl<<"Climb Stairs: ";
    cout<<climbStairs(5)<<endl;
    
    int maxi=INT_MIN;
    findMax(arr, n, i, maxi);
    cout<<endl<<"Greatest Element in an Array is: "<<maxi;
    
    int mini=INT_MAX;
    findMin(arr, n, i, mini);
    cout<<endl<<"Smallest Element is an Array is: "<<mini;
    return 0;
}