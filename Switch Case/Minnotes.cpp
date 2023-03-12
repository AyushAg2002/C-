#include<iostream>
using namespace std;
int main(){
    int n,num;
    cin>>n;
    int notes100, notes50, notes20, notes1;
    if(n>=100){
        num=1;
    }
    if(n<100){
        num=2;
    }
    if(n<50){
        num=3;
    }
    if(n<20){
        num=4;
    }

     switch(num){
        case 1:notes100=n/100;
               n=n%100;
               cout <<"100 rs notes is"<<notes100<<endl;
        
        case 2:notes50=n/50;
               n=n%50;
               cout <<"50 rs notes is"<<notes50<<endl;

        case 3:notes20=n/20;
               n=n%20;
               cout <<"20 rs notes is"<<notes20<<endl;

        case 4:notes1=n/1;
               n=n%1;
               cout <<"1 rs notes is"<<notes1<<endl;
     }
}