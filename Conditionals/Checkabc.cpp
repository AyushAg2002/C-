#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter character"<<endl;
    cin>>c;
    if(c>='A' && c<='Z'){
        cout<<"uppercase"<<endl;
    }
    if(c>='a' && c<='z'){
        cout<<"smallcase"<<endl;
    }
}
