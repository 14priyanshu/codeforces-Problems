#include<bits/stdc++.h>
using namespace std;
 int main()
  {
    int test;
    cin>>test;
    for(int itr=0;itr<test;itr++)
      {
        int size;
        cin>>size;
        vector<int> temp(size,0);
        int res=0;
        for(int i=0;i<size-1;i++)
          {
            int loc;
            cin>>loc;
            res+=loc;
            temp[i]=loc;
          }
        cout<<0-res<<endl;

      }
    return 0;
  }