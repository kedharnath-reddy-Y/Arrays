#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int>& a,vector<int>& b){
     int n=a.size();
     int m=b.size();

     vector<int> res(m+n);

     int i=0;
     int j=0;
     int k=0;

     while(i<=n && j<=m){
          if(a[i]<b[i]){
               res[k]=a[i];
               i++;
               k++;
          }
          else if(a[i]>b[i]){
               res[k]=b[i];
               j++;
               k++;
          }
     }

     if(i==n){
          while(j<=m-1){
               res[k]=b[j];
               k++;
               j++;
          }
     }
     if(i==m){
          while(j<=n-1){
               res[k]=a[i];
               k++;
               i++;
          }
     }
}
int main(){

     vector<int> a;
     a.push_back(1);
     a.push_back(4);
     a.push_back(5);
     a.push_back(8);

     vector<int> b;
     a.push_back(2);
     a.push_back(3);
     a.push_back(6);
     a.push_back(7);
     a.push_back(10);
     a.push_back(12);


     vector<int> v = merge(a,b);
}