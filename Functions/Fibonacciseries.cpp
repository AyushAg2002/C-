#include<iostream>
using namespace std;
int fibonacci(int num1){
    int a=0;
    int b=1;
    int n=3;
    int ans;
    while(n<=num1){
        ans=a+b;
        a=b;
        b=ans;
        n=n+1;
    }
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    int ans=fibonacci(n);
    cout<<n<<" term is:"<<ans<<endl;

}