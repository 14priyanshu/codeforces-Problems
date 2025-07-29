#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin>>test;
  for(int itr=0;itr<test;itr++)
    {
      int integer;
      cin>>integer;
       if(integer%3==0)
         { cout<<"Second"<<endl;}
       else 
        {cout<<"First"<<endl;}
    }
  return 0;
}