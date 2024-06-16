#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> v;
     
     v.push_back(1);
     cout<<v.size()<<endl;
     v.push_back(2);// it will add elements to the vector
     cout<<v.size()<<endl;
     v.push_back(6);
     cout<<v.size()<<endl;
     v.push_back(1);
     cout<<v.size()<<endl;

     vector<int> s(5,7);
     // size -> 5 and each element is 7 (all 5 elements is 7)

     //sort
     sort(v.begin(),v.end());
     // it  will sort the elements in order

     
     for (int i = 0; i < v.size(); i++) {
          cout << v[i] << " ";
     
     }

     cout<<endl;

     v.pop_back();
     v.pop_back();// it will remove the element

     for (int i = 0; i < v.size(); i++) {
          cout << v[i] << " ";
     }

     // size  and capacity are different

     v.push_back(1);
     cout<<v.capacity()<<endl;
     v.push_back(2);
     cout<<v.capacity()<<endl;
     v.push_back(6);
     cout<<v.capacity()<<endl;
     v.push_back(1);
     cout<<v.capacity()<<endl;


}