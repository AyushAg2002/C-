
#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    int val=1;
    while(i<=n){
        int j=1;
        val=i;
        while(j<=i){
        
            cout<<val;
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    
    

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}
