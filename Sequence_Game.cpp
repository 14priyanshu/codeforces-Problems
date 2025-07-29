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
        vector<int> given(size),tofind;
        for(int i=0;i<size;i++)
          {
            cin>>given[i];
          }
        tofind.push_back(given[0]);
        for(int i=1;i<size;i++)
          {
             if(given[i-1]<=given[i])
              tofind.push_back(given[i]);
             else
              {
                tofind.push_back(given[i]);
                tofind.push_back(given[i]);
              }
          }
          cout<<tofind.size()<<endl;
          for(int i=0;i<tofind.size();i++)
            {
              cout<<tofind[i]<<" ";
            }
            cout<<endl;

      }
    return 0;
  }
