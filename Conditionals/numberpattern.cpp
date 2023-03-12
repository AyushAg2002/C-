#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int i=1;
    int k=0;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
          cout<<j;
          j++;
            
        }
        int stars=1;
        while(stars<=k){
          cout<<"*";
          stars=stars+1;
        }
        
        int m=n-i+1;
        while(m>=1){
          cout<<m;
          m--;
        }
        cout<<endl;
        k=k+2;
        i++;
    }
    
    

}
   
    
    

