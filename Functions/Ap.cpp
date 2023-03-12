#include<iostream>
using namespace std;
int ap(int num1){
    
    int ans =(3*num1)+7;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans = ap(n);
    cout<<n<<" term is:"<<ans<<endl;


}
