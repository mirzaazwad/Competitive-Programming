#include <iostream>
#include<vector>
using namespace std;

template <typename T>
class BinaryIndexedTree
{
private:
  vector<T> BIT;
  int length;

public:
  BinaryIndexedTree(int n)
  {
    length = n + 1;
    BIT.assign(n + 1, 0);
  }

  void update(int index, T value)
  {

    while (index <= length-1)
    {
      BIT[index] = BIT[index] + value;
      index = index + (index & (-index));
    }
  }

  T query(int index)
  {
    T ans;
    ans = 0;

    while (index > 0)
    {
      ans = ans + BIT[index];
      index = index - (index & (-index));
    }

    return ans;
  }

  void clear(){
    BIT.clear();
  }
};

namespace Problem
{
  class Program
  {
  private:
    int x;
    int y;
    int w;
    int choice;
    long long ans;
    int q;
    int ch;
    long long n;
  public:
    Program(int t = 1)
    {
      cout << "Case ";
      for (int i = 1; i <= t; i++)
      {
        cout << i<<": "<<endl;
        takeInput();
        solve();
        clearSpace();
      }
    }

    void takeInput()
    {
    }

    void clearSpace()
    {

    }
    void solve()
    {
        
        cin>>n>>q;
        BinaryIndexedTree<long long> *BIT=new BinaryIndexedTree<long long>(n);

        for (int i = 1; i <= n; i++)
        {
          cin>>x;
          BIT->update(i,x);
        }
        for (int i = 0; i < q; i++)
        {
          cin>>ch;
          switch (ch)
          {
          case 1:
            cin>>x;
            x++;
            ans = BIT->query(x) - BIT->query(x - 1);
            BIT->update(x, -ans);
            cout<<ans<<endl;
            break;
          case 2:
            cin>>x;
            x++;
            cin>>w;
            BIT->update(x, w);
            break;

          case 3:
            cin>>x>>y;
            x++;
            y++;
            ans = BIT->query(y) - BIT->query(x - 1);
            cout<<ans<<endl;
            break;
          }
        }
      }
  };
}
signed main()
{
  int tc;
  cin >> tc;
  Problem::Program program = Problem::Program(tc);
  return 0;
}
