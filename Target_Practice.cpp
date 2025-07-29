#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test;
  cin>>test;
  for(int itr=0;itr<test;itr++)
    {
      vector<vector<char>> mat(10,vector<char>(10));
       for(int i=0;i<10;i++)
        {
          for(int j=0;j<10;j++)
          {
            char a;
            cin>>a;
            mat[i][j]=a;
          }
        }
        int top=0,left=0,right=9,bottom=9;
        int temp=1;
        int res=0;
        while(top<=bottom&&left<=right)
          {
              for(int j=left;j<=right;j++)
                {
                   if(mat[top][j]=='X')
                     res+=temp;
                }
                top++;
              for(int i=top;i<=bottom;i++)
                {
                  if(mat[i][right]=='X')
                     res+=temp;
                }
                right--;
                bool appear=false;
                if(top<=bottom)
                {
                      for(int j=right;j>=left;j--)
                    {
                      if(mat[bottom][j]=='X')
                          res+=temp;
                    }
                     bottom--;
                     appear=true;
                }
                if(left<=right)
                {  for(int i=bottom;i>=top;i--)
                  {
                    if(mat[i][top]=='X')
                      res+=temp;
                  }
                  left++;
                  appear=true;
                }
                if(appear)
                  temp++;
                

          }
          cout<<res<<endl;
    }
  
  return 0;
}






































// vector<int> spirallyTraverse(vector<vector<int>>& mat) {
//     int m = mat.size(), n = mat[0].size();
//     vector<int> res;
//     int top=0, bottom=m-1, left=0, right=n-1;
//     while (top <= bottom && left <= right) {
//         for (int j = left; j <= right; ++j) res.push_back(mat[top][j]);
//         ++top;
//         for (int i = top; i <= bottom; ++i) res.push_back(mat[i][right]);
//         --right;
//         if (top <= bottom) {
//             for (int j = right; j >= left; --j) res.push_back(mat[bottom][j]);
//             --bottom;
//         }
//         if (left <= right) {
//             for (int i = bottom; i >= top; --i) res.push_back(mat[i][left]);
//             ++left;
//         }
//     }
//     return res;
// }
