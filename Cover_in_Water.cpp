#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin >> test;
  while (test)
  {
    int l;
    cin >> l;
    string str;
    cin >> str;
   // int i = 0;
    int count = 0;
    int res = 0;bool com=false;
    for(int i=0;i<l;i++)
    {
       if(str[i]=='.')
        {
          count++;res++; 
        }

      if(count==3)
       {
        cout<<2<<endl;
        com =true;
        break;
       }
        if(str[i]=='#')
        count=0;
    }
     if(!com)
      cout<<res<<endl;
      test--;
    
  }
  return 0;
}