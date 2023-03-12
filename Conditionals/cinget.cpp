#include <iostream>
using namespace std;
int main(){
    char ch;
    ch = cin.get();
    int alphabets=0; int digits=0; int spaces=0;
    while(ch!='$'){
        if(ch>='a' && ch<='z'){
            alphabets++;
        }
        if(ch>='0' && ch<='9'){
            digits++;
        }
        if(ch==' '|| ch=='\t' || ch=='\n'){
            spaces++;
        }
        ch = cin.get();
        
    }
    cout<<alphabets<<" "<<digits<<" "<<spaces<<endl;
}
    
