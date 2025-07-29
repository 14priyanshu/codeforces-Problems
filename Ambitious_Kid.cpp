#include<bits/stdc++.h>
using namespace std;

int main()
  {
    int size;
    cin>>size;
    vector<int> temp(size);
    int mini=INT_MAX;
    for(int i=0;i<size;i++)
      {
        int loc;
        cin>>loc;
        temp[i]=loc;
        mini=min(mini,abs(loc));
      }
      cout<<mini;
    return 0;
  }