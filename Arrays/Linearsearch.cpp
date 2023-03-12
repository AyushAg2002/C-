#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int key){
    int ans;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
          return 1;

        }

    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value you want to search"<<endl;
    cin>>key;
    bool ans=linearsearch(arr,n,key);
    if (ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }

}