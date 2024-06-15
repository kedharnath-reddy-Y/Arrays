#include<iostream>
using namespace std;

int main(){
     
     int n;
     cout<<"\nenter the no fo elements :";
     cin>>n;
     int arr[n];
     int x;
     cout<<" enter the element u want to search :";
     cin>>x;


     for(int i=0;i<=n-1;i++){
          cin>>arr[i];
     }
     bool flag= false;
     for(int i=0;i<=5;i++){
          if(arr[i]==x){
          flag =true;
     }
     }
     if(flag==true) cout<<"found";
     else cout<<" not found";
}