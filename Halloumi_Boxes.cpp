#include<bits/stdc++.h>
using namespace std;
 
int main()
  {
    int test;
    cin>>test;
     for(int i=0;i<test;i++)
      {
        int boxes,swapp;
        cin>>boxes>>swapp;
        vector<int> seq(boxes);
        bool sort=true;
        for(int j=0;j<boxes;j++)
          {
            cin>>seq[j];
            if(j!=0&&seq[j-1]>seq[j])
              sort= false;
          }
          if(!sort&&swapp==1)
            {cout<<"no"<<endl;}
          else 
            {cout<<"yes"<<endl;}
        
      }
      return 0;
  }