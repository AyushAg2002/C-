#include<iostream>
using namespace std;
int main(){
    int i,n,j,count=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<count;
            count++;
            
        }
        cout<<endl;
    }
}