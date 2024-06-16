#include<iostream>
#include<vector>
using namespace std;
int main(){

     int x;
     cout<<"\nEnter the target :";
     cin>>x;

     int n;
     cout<<"Enter the size of array :";
     cin>>n;

     vector<int> v;
     for(int i=0;i<=n;i++){
          int q;
          cin>>q;
          v.push_back(q);
     }

     for(int i=0;i<=v.size()-2;i++){
          for(int j=i+1;j<=v.size()-1;j++){
               if(v[i]+v[j]==x){
                    cout<<"["<<v[i]<<","<<v[j]<<"]"<<endl;
               }
          }
     }
}
/* the problem is in a vector sum any two index's == -> target 
we have to print those index numbers in output

so we use loops and if else

we take all the required input 
then we strat loop where
"i" will take the first index to check
"j" that y j will start form i+1 (it will take next index to "i")

so the i and j have two index's here we start if else to check their
sum is -> == target then print those as output */

