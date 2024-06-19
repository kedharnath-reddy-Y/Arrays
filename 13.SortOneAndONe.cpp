#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
     for(int i=0;i<=v.size()-1;i++){
          cout<<v[i];
     }
}

void sortm2(vector<int>& v){
     int n = v.size();
     int i = 0;
     int j = n - 1;
     while(i < j){
          if(v[i] == 0) {
               i++;
          } else if(v[j] == 1) {
               j--;
          } else {
               // Swap v[i] and v[j]
               v[i] = 0;
               v[j] = 1;
               i++;
               j--;
          }
     }
}

/*void sortm2(vector<int>& v){
     int n= v.size();
     int i=0;
     int j=n-1;
     while(i<j){
          if(v[i]==0) i++;
          if(v[j]==0) j++;
          if(i>j) break;
          if(v[i]==1 && v[j]==0){
               v[i]=0;
               v[j]=1;
               i++;
               j--;
          }
     }
}
*/
   
void sort(vector<int>& v){
     int n= v.size();
     int no0=0;
     int no1=0;
     for(int i=0;i<=n;i++){
          if(v[i]==no0) no0++;
          else no1++;
     }
     
     for(int i=0;i<=n;i++){
          if(i<no0) v[i]=0;
          else v[i]=1;
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

     sortm2(v);
     
     display(v);

}
