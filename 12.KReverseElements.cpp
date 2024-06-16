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

     int k;
     cout<<"\nEnter the no of elements to rotate:";
     cin>>k;

     int n=v.size();

     if(k>n) k = k % n;

     reversePart(0,n-k-1,v);
     display(v);
     cout<<endl;
     reversePart(n-k,n-1,v);
     display(v);
     cout<<endl;
     reversePart(0,n-1,v);
     display(v);

}      
/* so the question here k will be given 
we should k no of elements to front to the orginal array

if k=2
example: 1 2 3 4 5
new arr: 4 5 1 2 3 

to solve we use reverse part funtion wher it will be printed only
required part so basically we will break the array to solve

1 2 3 4 5->k
1 2 3 -> n-k
4 5 -> k 

first reverse the n-k and k then we rotate total new array then we will 
get the required output
--------------------------
reversePart(0,n-k-1,v)
------------------------
ouput for this funtion -> 32145
0 to n-k-1 and v(vector)
n-k is the normal array (1st step (rotate it))
-1 is because we need index's
------------------------
reversePart(n-k,n-1,v)
---------------------------
ouput for this funtion -> 32154
n-k and n-1 and v(vector)
n-k the elements after the normal array
n-1 it is the end 
-1 is because we need index's
--------------------------
reversePart(0,n-1,v)
---------------------------
ouput for this funtion -> 32154
0 and n-1 and v(vector)
0 1st element
n-1 last element 
basically reverse the new array
------------------------------

if(k>n) k = k % n;
--------------------------
here the solutions is that if k=n 
k-> no of elements to rotate
n-> total elements 

we use modlus so after the division 
we will get new new it will as k

example === -> 50 % 7 -> 49 +1 
so 7 times then array is same because k=n
so the k=1 
*/             