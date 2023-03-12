#include<iostream>
using namespace std;
int main()
{
    int n;
    bool is_prime=true;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            
             is_prime=false;
            
        }
        i++;
    }
    
    if(is_prime){
         cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}
