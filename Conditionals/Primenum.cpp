#include <iostream>
using namespace std;
int main()
{
    int n,i=2;
    cout<<"Enter number"<<endl;
    cin>>n;
    bool divided=false;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"not prime"<<endl;
            divided=true;
            break;
        }
        i=i+1;

    }
    if(!divided)
    {
        cout<<"prime"<<endl;
    }



}
