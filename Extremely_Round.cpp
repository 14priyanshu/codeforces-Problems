#include<bits/stdc++.h>
using namespace std;
int main()
  {
    int test;
    cin>>test;
    for(int j=0;j<test;j++)
      {
        int n;
        cin>>n;
        int res=10;
        int a=2,b=10;
        if(n<=10)
         cout<<n<<endl;
        else
          {
            while((a*b)<=n)
             {
              res++;
              a++;
              if(a>10)
              {
                a=2;
                b*=10;
              }
             }
             cout<<res<<endl;
          }
      }
    return 0;

  }