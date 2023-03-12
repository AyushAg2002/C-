#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    char m='A';
    while(i<=n){
    int j=1;
    while(j<=i){
        cout<<m;
        j++;
    }
    cout<<endl;
    m++;
    i++;
    }
    
}

