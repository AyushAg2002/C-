#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
    int j=1;
    char m='A'+i-1;
    while(j<=n){
        cout<<m;
        m++;
        j++;
    }
    cout<<endl;
    i++;
    }
}