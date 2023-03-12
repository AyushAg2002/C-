#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    long ans=0;
    int x=1;
    while(n!=0){
        int rem= n%2;
        ans=ans+rem*x;
        x=x*10;
        n=n/2;
    }
    cout<<ans;
    
	
}
