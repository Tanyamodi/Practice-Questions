#include<iostream>
#include<string>
using namespace std;

void printPermutation(string& str, int i){
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }

    for(int j=i;j<str.length();j++){
        swap(str[i], str[j]);
        printPermutation(str, i+1);
        swap(str[i], str[j]);
    }
}
int main(){
    string str = "xyz";
    int i=0;
    printPermutation(str, i);
    cout<<endl;
    return 0;
}