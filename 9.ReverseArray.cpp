#include<iostream>
#include<vector>
using namespace std;
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

     vector<int> v2(v.size());

     for (int i = v.size() - 1; i >= 0; i--) {
         cout << v[i] << " ";
     }

     for(int i=0;i<=v2.size();i++){
          v2[i]=v[v.size() -1 -i];
     }
}