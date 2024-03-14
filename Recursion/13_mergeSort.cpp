#include<iostream>
using namespace std;

void merge(int* arr, int s, int e){
    int mid =(s+e)/2;
    
    int len1=mid-s+1;
    int len2=e-mid;
    
    //values copy karo
    int* left = new int[len1];
    int* right = new int[len2];
    
    int k=s;
    int i=0;
    while(i<len1){
        left[i++]=arr[k++];
    }
    
    k=mid+1;
    int j=0;
    while(j<len2){
        right[j++]=arr[k++];
    }
    
    int leftindex = 0;
    int rightindex = 0;
    int mainindex = s;
    
    while(leftindex<len1 && rightindex<len2){
        if(left[leftindex]<right[rightindex]){
            arr[mainindex++]=left[leftindex++];
        }
        else{
            arr[mainindex++]=right[rightindex++];
        }
    }
    
    while(leftindex<len1){
        arr[mainindex++]=left[leftindex++];
    }
    while(rightindex<len2){
        arr[mainindex++]=right[rightindex++];
    }
    
}

void mergeSort(int* arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }
    
    int mid=(s+e)/2;
    
    //left call
    mergeSort(arr, s, mid);
    
    //right call
    mergeSort(arr, mid+1, e);
    
    merge(arr, s, e);
}
int main(){
    int arr[]={4,13,2,5,7,8,9,4,4,3,5,7,8,9};
    int n= 14;
    
    int s=0;
    int e=n-1;
    
    mergeSort(arr, s, e);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}