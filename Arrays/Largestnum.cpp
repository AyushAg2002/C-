#include<iostream>
#include<climits>
using namespace std;
int getmax(int arr[],int n){
    int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum value is:"<<getmax(arr,n)<<endl;
}
