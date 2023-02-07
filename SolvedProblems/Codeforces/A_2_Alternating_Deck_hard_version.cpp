#include <bits/stdc++.h>

#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

#define endl "\n"

using namespace std;

void pleasebeac()
{
  long long n;
  cin >> n;
  long long tries = (-1 + sqrt(double(1 + 8 * n))) / 2.00f;
  long long player1w = 0;
  long long player1b = 0;
  long long player2w = 0;
  long long player2b = 0;
  bool found = false;
  long long j = 1;
  bool itsfloor = true;
  long long sum = 0;
  for (long long i = 1; i <= tries; i++)
  {
    if (!found)
    {
      player1w += (i - i / 2);
      player1b += (i / 2);
    }
    else
    {
      player2w += (i / 2);
      player2b += (i - i / 2);
    }
    if (i % j == 0)
    {
      if (j % 2 == 0)
      {
        found = found ^ 1;
      }
      found = found ^ 1;
      j++;
    }
  }
  long long i = n - (tries * (tries + 1)) / 2;
  if (!found)
  {
    player1w += (i - i / 2);
    player1b += (i / 2);
  }
  else
  {
    player2w += (i / 2);
    player2b += (i - i / 2);
  }
  cout << player1w << " " << player1b << " " << player2w << " " << player2b << endl;
}

int main()
{
  fastio;
  long long tc;
  cin >> tc;
  while (tc--)
  {
    pleasebeac();
  }
  return 0;
}