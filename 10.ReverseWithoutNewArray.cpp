#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
     for(int i=0;i<=v.size()-1;i++){
          cout<<v[i];
     }
}

int main(){

     int n;
     cout<<"\nEnter the size of array :";
     cin>>n;

     vector<int> v;
     
     cout<<"\nEnter the elements of array :";
     for(int i=0;i<=n;i++){
          int q;
          cin>>q;
          v.push_back(q);
     }

     display(v);
     cout<<endl;

     int i=0,j=v.size()-1;
     while (i<=j){
          int temp=v[i];
          v[i]=v[j];
          v[j]=temp;
          i++;
          j--;
     }
     display(v);
     cout<<endl;
     // another method

     for(int i=0,j=v.size()-1;i<=j;i++,j--){
          int temp=v[i];
          v[i]=v[j];
          v[j]=temp;

     }
     display(v);
     cout<<endl;
}