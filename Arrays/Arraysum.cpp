#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    int sum=0;
    for(int m=0;m<size;m++){
       
        sum=arr[m]+sum;
    }
    cout<<"sum is"<<sum<<endl;

}