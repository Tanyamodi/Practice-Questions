#include<iostream>
#include<vector>
using namespace std;

void lastOcc(string str, char x, int i, int &ans){
    if(i>=str.length()){
        return;
    }
    
    if(str[i]=x){
        ans=i;
    }
    
    lastOcc(str, x, i+1, ans);
}
int main(){
    string str = "abcdefghijd";
    char x = 'd';
    int i=0;
    int ans =-1;
    lastOcc(str, x, i, ans);
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}