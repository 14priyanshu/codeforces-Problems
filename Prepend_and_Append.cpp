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
        string v;
        cin>>v;
        int i=0,j=size-1;
        
          while(i<j)
            {
               if(v[i]==v[j])
                {
                  cout<<j-i+1<<endl;
                  break;
                }
                i++;j--;
            }
          if(i==j)
           cout<<1<<endl;
          else if(i>j)
           cout<<0<<endl;
      }
    return 0;
  }