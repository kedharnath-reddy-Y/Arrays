#include<iostream>
using namespace std;

int main(){

     int x;
     cout<<"\n enter the  elements u want to check :";
     cin>>x;

     int n;
     cout<<" \nenter the nof elements :";
     cin>>n;

     int arr[n];
     for(int i=0;i<=n-1;i++){
          cin>>arr[i];
     }
     int a=0;
     for(int i=0;i<=n-1;i++){
          if(arr[i]>>x) a++;
          
     }
     cout<<a;
}