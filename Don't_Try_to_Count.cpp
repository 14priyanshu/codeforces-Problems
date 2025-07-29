#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin>>test;
  for(int j=0;j<test;j++)
  { int len1,len2;
    cin>>len1>>len2;
    string str1,str2;
    cin>>str1>>str2;
    string original=str1;
    int n=max(len1,len2);
    int count=0;
    bool appear=true;
    for(int i=0;i<n;i++)
      {
         //if(find(str1.begin(),str1.end(),str2)!=npos:)
         if(str1.find(str2)!=string::npos)
           {
             cout<<count<<endl;
             appear=false;
              break;
           }
          else 
           { 
             str1+=original;
            count++;
           }
           
      }
      if(appear)
       cout<<-1<<endl;

    
  }
  return 0;

}