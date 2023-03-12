#include<iostream>
using namespace std;
float fahtocel(float fah){
  float cel=5.0*(fah-32.0)/9.0;
  return cel;
   

}
int main(){
  float n;
  cin>>n;
  float ans=fahtocel(n);
  cout<<"cel value is"<<ans<<endl;

}