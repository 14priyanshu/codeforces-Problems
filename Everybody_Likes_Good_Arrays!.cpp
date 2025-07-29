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
        vector<int> temp(size);
        int parity=0;
        for(int i=0;i<size;i++)
          {
            int loc;
            cin>>loc;
            temp[i]=loc;
            if(i!=0&&temp[i]%2==temp[i-1]%2)
               parity++;
          }
          cout<<parity<<endl;
      }
    return 0;
  }
