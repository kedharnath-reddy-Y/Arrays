#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
     for(int i=0;i<=v.size()-1;i++){
          cout<<v[i];
     }
}  
void sort(vector<int>& v){
     int n= v.size();
     int no0=0;
     int no1=0;
     int no2=0;

     for(int i=0;i<=n;i++){
          if(v[i]==0) no0++;
          else if(v[i]==1)  no1++;  
          else no2++;
          }
     
     for(int i=0;i<=n;i++){
          if(i<no0) v[i]=0;
          else if(i<(no1+no0)) v[i]=1;
          else v[i]=2;
     }
     
}
int main(){

     int a;
     cout<<"\nEnter the size of array :";
     cin>>a;

     vector<int> v;
     
     cout<<"\nEnter the elements of array :";
     for(int i=0;i<=a;i++){
          int q;
          cin>>q;
          v.push_back(q);
     }  
     display(v);
     cout<<endl;

     sort(v);
     
     display(v);

}