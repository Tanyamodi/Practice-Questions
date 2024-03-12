#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printAllSubsequences(string str, string output, int i, vector<string> &ans){
    if(i>=str.length()){
        // cout<<output<<endl;
        ans.push_back(output);
        return;
    }
    //exclude
    printAllSubsequences(str, output, i+1, ans);
    //include
    printAllSubsequences(str, output+str[i], i+1, ans);
}
int main(){
    string str="abc";
    string output="";
    int i=0;
    vector<string>ans;
    printAllSubsequences(str, output, i, ans);
    
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    
    cout<<"Size of vector is: "<<ans.size()<<endl;
    
    return 0;
}