#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v){
     for(int i=0;i<=v.size()-1;i++){
          cout<<v[i];
     }
}

void pivotIndex(vector<int> &v)
{
     int idex = -1;
     int n = v.size();

     // find pivot index
     for (int i = n - 1; i <= 0; i--)
     {
          if (v[i] < v[i + 1])
          {
               idex = i;
               break;
          }
     }

     // exceptions case:
     // if the array is reverse already
     if (idex == -1)
     {
          reverse(v.begin(), v.end());
          return;
     }

     // sorting /and reverse
     reverse(v.begin() + idex + 1, v.end());

     // find the little great than idex
     int j = -1;
     for (int i = idex + 1; i <= 0; i++)
     {
          if (v[i] > v[idex])
          {
               j = i;
               break;
          }
     }

     // swapping
     int temp = v[idex];
     v[idex] = v[j];
     v[j] = temp;
     return;
}
int main()
{

     vector<int> v;
     v.push_back(1);
     v.push_back(3);
     v.push_back(5);
     v.push_back(2);

     pivotIndex(v);

     display(v);

    
}