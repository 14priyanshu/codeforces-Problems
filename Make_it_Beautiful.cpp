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
        vector<int> ugly(size);
        bool same=true;
        for(int i=0;i<size;i++)
          {
            cin>>ugly[i];
            if(i!=0&&ugly[i]!=ugly[0])
              same=false;
          }
          if(same)
            {
              cout<<"NO"<<endl;
              continue;
            }
            sort(ugly.begin(),ugly.end());
        // sort(ugly.begin(),ugly.end(),[](int a,int b)
        // {
        //  return a>b;
        // });
        rotate(ugly.begin(),ugly.end()-1,ugly.end());
        int sum=0;bool appear=false;
        for(int i=0;i<size;i++)
          {
             if(sum==ugly[i])
              {
                appear=true;
                break;
              }
              else sum+=ugly[i];
          }
          if(appear)
            cout<<"NO"<<endl;
          else 
            {
               cout<<"YES"<<endl;
              for(int i=0;i<size;i++)
                {
                  cout<<ugly[i]<<" ";
                }
                cout<<endl;
            }

        
      }
  }

