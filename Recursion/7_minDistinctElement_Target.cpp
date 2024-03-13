// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// //without extra variable
// int targetSolve(vector<int> &arr, int target){
    
//     if(target==0){
//         return 0;
//     }
//     if(target<0){
//         return INT_MAX;
//     }
    
//     int mini=INT_MAX;
//     int n=arr.size();
//     for(int i=0;i<n;i++){
//         int ans = targetSolve(arr, target-arr[i]);
//         if(ans!= INT_MAX)
//         mini=min(mini, ans+1);
//     }
//     return mini;
// }
// int main(){
    
//     vector<int>arr{1,2};
//     int target=5;
    
//     int ans=targetSolve(arr, target);
//     cout<<"Answer is: "<<ans<<endl;
    
//     return 0;
// }


#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int solve(vector<int> &arr, int target, int output){
    if(target==output){
        return 0;
    }
    
    if(target<output){
        return INT_MAX;
    }
    
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans = solve(arr, target, output + arr[i]);
        if(ans != INT_MAX){
        mini=min(mini, ans+1);
        }
    }
    return mini;
}
int main(){
    vector<int>arr{1,2,3};
    int target=5;
    int output=0;
    int ans = solve(arr, target, output);
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}
