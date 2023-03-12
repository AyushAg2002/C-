#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=1;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        int val=i;
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        int k=1;
        int m=2*i-2;
        while(k<=i-1){
            cout<<m;
            k++;
            m--;
        }
        cout<<endl;
        i++;
        
    }
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    
}
