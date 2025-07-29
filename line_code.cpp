#include <bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  //     //cout<<"enter test"<<endl;
  cin >> test;
  for (int itr = 0; itr < test; itr++)
  {
    int pump, end;
   
    cin >> pump >> end;
    
    vector<int> p;
    p.push_back(0);
   
    int maxi = 0;
    for (int i = 0; i < pump; i++)
     
     { int loc;
        cin>>loc;
        p.push_back(loc);}
    p.push_back(end);
      int size=p.size();
    
    for (int i = 1; i < size; i++)
    {
       if(i==size-1)
       {
          maxi=max(maxi,2*(p[i]-p[i-1]));
       }
       else
        maxi = max(maxi, p[i] - p[i - 1]);
    }

   
    cout << maxi << endl;
  }
  
}
