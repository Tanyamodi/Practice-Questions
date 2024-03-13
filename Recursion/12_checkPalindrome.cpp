#include<iostream>
#include<vector>
#include<string>
#include<string>
using namespace std;

bool checkPalindrome(string str, int start, int end){
    if(start>end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    return checkPalindrome(str, start+1, end-1);
}
int main(){
    string str;
    cin>>str;
    if(checkPalindrome(str, 0, str.length()-1)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}