#include<iostream>
using namespace std;
int setbits(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n%2!=0)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<setbits(a) + setbits(b)<<endl; 
    return 0;

}