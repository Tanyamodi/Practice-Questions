#include<iostream>
#include<vector>
using namespace std;

void checkString(string &str, int i, int n, char &key, int &count){
    if(i>=n){
        return ;
    }
    if(str[i]==key){
        // ans.push_back(i);
        count++;
    }
    return checkString(str, i+1, n, key, count);
}
int main(){
    string str="tanyamodi";
    int n=str.length();
    char key='a';
    int i=0;
    // vector<int>ans;
    // checkString(str, i, n, key, ans);
    // cout<<"Printing ans: "<<endl;
    // for(auto val: ans){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    int count=0;
    checkString(str, i, n, key, count);
    cout<<"Total count: "<<count<<endl;
    
    return 0;
}