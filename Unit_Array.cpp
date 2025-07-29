#include<bits/stdc++.h>
using namespace std;
int main()
{
int test;
cin>>test;
for(int j=0;j<test;j++)
  {
    int size;
    cin>>size;
    vector<int> v(size);
    int p=0,n=0;
    for(int i=0;i<size;i++)
      {
        int val;
        cin>>val;
        v[i]=val;
        if(val==-1)
         n++;
        else p++;
      }
    int count=0;
    int l=max(p,n);
    while(true)
    {  if(p>=n&&n%2==0)
         {
          cout<<count<<endl;
          break;
         }
        else if(n>p)
        {
          p++;n--;
          count++;
        }
        else if(n%2!=0)
        {
           n--;p++;
           count++;
        }
      l--;
    }
  }
  return 0;
}