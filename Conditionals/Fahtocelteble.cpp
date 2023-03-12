#include<iostream>
using namespace std;
int main()
{
    //S is Start Farenheight Value
    //E is End Farenheight Value
    //W is Step Size Value
    int S,E,W;
    cin>>S>>E>>W;
    int C;
    while (S<E)
    {
        C=5.0/9*(S-32);
        cout<<"Farenheight value is:"<<S<<endl;
        cout<<"Celcius value is:"<<C<<endl;
        S=S+W;

    }


}