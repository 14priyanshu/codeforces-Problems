#include<bits/stdc++.h>
using namespace std;
 int main()
 { int test;
  cin>>test;
   for(int itr=0;itr<test;itr++)
    {
      int size;
      cin>>size;
      vector<int>temp(size);
      int two=0;
      for(int i=0;i<size;i++)
        {
          cin>>temp[i];
          if(temp[i]==2)
            two++;

        }
        if(two==0)
        cout<<1<<endl;
        else if(two%2!=0)
          cout<<-1<<endl;
        else
          {two/=2;
            for(int i=0;i<size;i++)
              {
                if(temp[i]==2)
                 two--;
                if(two==0)
                  {
                    cout<<i+1<<endl;
                    break;
                  }
              }
          }

    }
  return  0;
 }