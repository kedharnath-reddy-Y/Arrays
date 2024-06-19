#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
     for(int i=0;i<=v.size()-1;i++){
          cout<<v[i];
     }
}  
void sort(vector<int>& v){
     int mid=0;
     int high=v.size()-1;
     int low=0;

     while(mid<=high){
          if(v[mid]==2){
               int temp= v[mid];
               v[mid]=v[high];
               v[high]=temp;
               high--;
          }
          else if(v[mid]==0){
               int temp= v[mid];
               v[mid]=v[low];
               v[low]=temp;
               low--;
               mid++;
          }
          else mid++;
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