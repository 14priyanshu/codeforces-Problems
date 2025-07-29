#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  cin>>test;
  for(int itr=0;itr<test;itr++)
    {
      int size,num;
      cin>>size>>num;
      bool appear=false;
      vector<int> temp(size);
      for(int i=0;i<size;i++)
        {
          int loc;
          cin>>loc;
          temp[i]=loc;
          if(loc==num)
          {
            appear=true;
          }
        }
      if(appear)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;

    }
    return 0;
}