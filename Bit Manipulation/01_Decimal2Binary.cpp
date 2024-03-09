#include<iostream>
#include<algorithm>
using namespace std;

string change2Binary(int n){
    string res="";
    while(n!=0){
        if(n%2 == 1) res+='1';
        else res+='0';
        n=n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(){
    cout<<change2Binary(79)<<endl;
    return 0;
}