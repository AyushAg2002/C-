//print the pattern
//1 2 3
//4 5 6
//7 8 9
#include<iostream>
using namespace std;
int main(){
    int i,n,j,count=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<count;
            count++;
            
        }
        cout<<endl;
    }
}