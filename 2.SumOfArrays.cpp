#include<iostream>
using namespace std;

int main(){
     
     int a=0;
     int n;
     cout<<"enter the no fo elements";
     cin>>n;
     int arr[n];

     for(int i=0;i<=n-1;i++){
          cin>>arr[i];
     }

     for(int i=0;i<=n-1;i++){
          a+=arr[i];
          
     }
     cout<<a;
}