#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
     for(int i=0;i<=v.size()-1;i++){
          cout<<v[i];
     }
}
void reverse(vector<int>& v){
     for(int i=0,j=v.size()-1;i<=j;i++,j--){
          int temp=v[i];
          v[i]=v[j];
          v[j]=temp;

     }
}
void reversePart(int i,int j,vector<int>& v){
     while (i<=j){
          int temp=v[i];
          v[i]=v[j];
          v[j]=temp;
          i++;
          j--;
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
     reversePart(1,3,v);
     display(v);

}                   