#include<iostream>
#include<string>
using namespace std;
int change2Decimal(string x){
    int n=x.length();
    int P2=1, num=0;
    for(int i=n-1;i>=0;i--){
        if(x[i]=='1')
        num=num+P2;
    P2=P2*2;
    }
    return num;
}

int main(){
    cout<<change2Decimal("1101")<<endl;
    return 0;
}