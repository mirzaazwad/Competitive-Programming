#include<bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

int main()
{
  fastio;
  int no, color[105][105], smoke[105][105], s[105][105];
  while (cin>>no)
  {
    int i, k, j, l, temp;
    for (i = 0; i < no; i++)
    {
      cin>>color[i][i];
    }
    for (l = 2; l <= no; l++)
      for (i = 0; i < no - l + 1; i++)
      {
        j = i + l - 1;
        int min = INT_MAX;
        for (k = i; k <= j - 1; k++)
        {
          temp = smoke[i][k] + smoke[k + 1][j] + color[i][k] * color[k + 1][j];
          if (temp < min)
          {
            color[i][j] = (color[i][k] + color[k + 1][j]) % 100;
            min = temp;
            smoke[i][j] = min;
          }
        }
      }
    int ans;
    cout<<smoke[0][no-1]<<endl;
  }
}
