#include<bits/stdc++.h>
using namespace std;

int main()
{
   int test;
   cin>>test;
   for(int itr=0 ; itr<test ; itr++)
    {
       int size;
       cin>>size;
       vector<int> temp(size,-1);
       for (int i = 0; i <size; i++)
       {
          int loc;
          cin>>loc;
          temp[i]=loc;
          
       }
       if(temp[0]==1)
        cout<<"YES"<<endl;
      else  {
        cout<<"NO"<<endl;
      }
       
      
          
    }
  return 0;
}