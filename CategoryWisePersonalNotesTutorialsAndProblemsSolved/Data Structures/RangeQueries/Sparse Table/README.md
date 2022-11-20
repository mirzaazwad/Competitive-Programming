# Sparse Table

Sparse tables are mostly applicable for range queries as these queries tend to be overlapping queries which allow the answer to be retrieved in O(1) time. For most other queries it can work in O(logn). The main issue with sparse tables as compared to other data structures is that it can only be applicable for immutable arrays or arrays that cannot be changed between queries. 

The primary idea behind using sparse tables is that any number can be represented in the binary form using at best ⌈log<sub>2</sub>x⌉ summands say the number 31 which in binary is:
![binaryRepresentation](https://github.com/mirzaazwad/Data-Structures-And-Algorithms/blob/main/DataStructures/Resources/SparseTable/binaryRepresentation.png)

By the same reasoning any interval can be uniquely represented with decreasing powers of 2, for instance
<h4>
  [0..18] = [0..2<sup>4</sup>) U [2<sup>4</sup>..2<sup>4</sup>+2<sup>1</sup>) U [2<sup>4</sup>+2<sup>1</sup>..2<sup>4</sup>+2<sup>1</sup>+2<sup>0</sup>)
 </h4>
 
 Precompute the values of these subranges and build the table in such a way so that [i,j] stores the value for [j,j+2<sup>i</sup>] 
 
 Let's take the example of the array, 
 
 ```cpp
 int arr[13]={4,2,3,7,1,5,3,3,9,6,7,-1,4};
 ```

 <table>
<thead>
  <tr>
    <th></th>
    <th>0</th>
    <th>1</th>
    <th>2</th>
    <th>3</th>
    <th>4</th>
    <th>5</th>
    <th>6</th>
    <th>7</th>
    <th>8</th>
    <th>9</th>
    <th>10</th>
    <th>11</th>
    <th>12</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>0</td>
    <td>4</td>
    <td>2</td>
    <td>3</td>
    <td>7</td>
    <td>1</td>
    <td>5</td>
    <td>3</td>
    <td>3</td>
    <td>9</td>
    <td>6</td>
    <td>7</td>
    <td>-1</td>
    <td>4</td>
  </tr>
  <tr>
    <td>1</td>
    <td>2</td>
    <td>2</td>
    <td>3</td>
    <td>1</td>
    <td>1</td>
    <td>3</td>
    <td>3</td>
    <td>3</td>
    <td>6</td>
    <td>6</td>
    <td>-1</td>
    <td>-1</td>
    <td> X </td>
  </tr>
  <tr>
    <td>2</td>
    <td>2</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>3</td>
    <td>3</td>
    <td>3</td>
    <td>-1</td>
    <td>-1</td>
    <td>X</td>
    <td>X</td>
    <td>X</td>
  </tr>
  <tr>
    <td>3</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>1</td>
    <td>-1</td>
    <td>-1</td>
    <td>X</td>
    <td>X</td>
    <td>X</td>
    <td>X</td>
    <td>X</td>
    <td>X</td>
    <td>X</td>
  </tr>
</tbody>
</table>
 
 O(nlogn) time is still required for precalculation. But for queries it takes O(1) time for overlapping queries and O(logn) time for non-overlapping queries. So each value in the cells can be calculated as follows:

 ```cpp
 SparseTable[i][j]=f(SparseTable[i-1][j],SparseTable[i-1][j+(1<<(i-1))]);
 ```

 Which essentially translates to the function f that is performed on SparseTable[i-1][j] and SparseTable[i-1][j+2<sup>i</sup>].

 Now let's try to calculate the minimum for the array given above for the range 1 to 11.
The range can be split as follows:
```
[1,11]=[1,1+(1<<3)] U [9,9+1<<1] U [11,11+1<<0];
```
if [j,j+2<sup>i</sup>] represents each one of these splits, the minimum can be obtained from (i,j) being (3,1), (1,9) and (0,11) cells in the sparse table, so the min is min(1,6,-1)=-1 so this allows us to find RMQ in O(1).

If we form an equation out of this idea, [l,r] = [l,l+2<sup>k</sup>] U [r-2<sup>k</sup>+l,r] where k is the maximum power of 2 and

r>=l+2<sup>k</sup>

To implement a sparse table for RMQ:
```cpp
    class RMQ
    {
    private:
        int SparseTable[17][100005];

    public:
    // SparseTable[i][j] is going to store minimum
    // value in arr[i..j]. Ideally SparseTable table
    // size should not be fixed and should be
    // determined using n Log n. It is kept
    // constant to keep code simple.
        RMQ(vector<int> arr, int n)
        {
          // Fills SparseTable array SparseTable[][] in top down manner.
          //First row remains as it is
            copy(arr.begin(), arr.end(), SparseTable[0]);
            // Compute values for remaining intervals of the power of 2
            for (int i = 0; i < n; i++)
            {
            }
            for (int i = 1; (1 << i) < n; i++)
            {
                for (int j = 0; j + (1 << i) - 1 < n; j++)
                {
                    SparseTable[i][j] = min(SparseTable[i - 1][j], SparseTable[i - 1][j + (1 << (i - 1))]);
                }
            }
        }
        // Returns minimum of arr[L..R]
        int query(int L, int R)
        {
          // Find highest power of 2 that is smaller
          // than or equal to count of elements in given
          // range. For [2, 10], j = 3
            int j = (int)log2(R - L + 1);
            // Compute minimum of last 2^j elements with first
            // 2^j elements in range.
            // For [2, 10], we compare arr[SparseTable[0][3]] and
            // arr[SparseTable[3][3]],
            return min(SparseTable[j][L],SparseTable[j][R - (1 << j) + 1]);
        }

        void clear()
        {
          //Clears the sparse table
            memset(SparseTable, 0, sizeof(SparseTable));
        }
    };

    //RMQ* rmq=neq RMQ(array,sizeOfArray)
    //rmq->clear() //clear current rmq
    //rmq->query(L,R) query from Left to Right
```

And then we see another implementation of the sparse table for gcd

```cpp
#include <bits/stdc++.h>
using namespace std;
#define MAX 500
 
// SparseTable[i][j] is going to store GCD of
// arr[i..j]. Ideally SparseTable table
// size should not be fixed and should be
// determined using n Log n. It is kept
// constant to keep code simple.
int table[MAX][MAX];
 
// it builds sparse table.
void buildSparseTable(int arr[], int n)
{
    // GCD of single element is element itself
    for (int i = 0; i < n; i++)
        table[i][0] = arr[i];
 
    // Build sparse table
    for (int j = 1; j <= log2(n); j++)
        for (int i = 0; i <= n - (1 << j); i++)
            table[i][j] = __gcd(table[i][j - 1],
                    table[i + (1 << (j - 1))][j - 1]);
}
 
// Returns GCD of arr[L..R]
int query(int L, int R)
{
    // Find highest power of 2 that is smaller
    // than or equal to count of elements in given
    // range.For [2, 10], j = 3
    int j = (int)log2(R - L + 1);
 
    // Compute GCD of last 2^j elements with first
    // 2^j elements in range.
    // For [2, 10], we find GCD of arr[SparseTable[0][3]] and
    // arr[SparseTable[3][3]],
    return __gcd(table[L][j], table[R - (1 << j) + 1][j]);
}
```

## Some Practice Problems:
<ul>
<li><a href="http://www.spoj.com/problems/RMQSQ/">SPOJ - RMQSQ</a></li>
<li><a href="http://www.spoj.com/problems/THRBL/">SPOJ - THRBL</a></li>
<li><a href="https://www.codechef.com/problems/MSTICK">Codechef - MSTICK</a></li>
<li><a href="https://www.codechef.com/problems/SEAD">Codechef - SEAD</a></li>
<li><a href="http://codeforces.com/contest/475/problem/D">Codeforces - CGCDSSQ</a></li>
<li><a href="http://codeforces.com/problemset/problem/514/D">Codeforces - R2D2 and Droid Army</a></li>
<li><a href="http://codeforces.com/problemset/problem/872/B">Codeforces - Maximum of Maximums of Minimums</a></li>
<li><a href="http://www.spoj.com/problems/TNVFC1M/">SPOJ - Miraculous</a></li>
<li><a href="http://codeforces.com/contest/713/problem/D">Codeforces - Animals and Puzzles</a></li>
<li><a href="http://codeforces.com/contest/675/problem/E">Codeforces - Trains and Statistics</a></li>
<li><a href="http://www.spoj.com/problems/POSTERIN/">SPOJ - Postering</a></li>
<li><a href="http://www.spoj.com/problems/RPLN/">SPOJ - Negative Score</a></li>
<li><a href="http://www.spoj.com/problems/CITY2/">SPOJ - A Famous City</a></li>
<li><a href="http://www.spoj.com/problems/DIFERENC/">SPOJ - Diferencija</a></li>
<li><a href="http://codeforces.com/contest/863/problem/E">Codeforces - Turn off the TV</a></li>
<li><a href="http://codeforces.com/contest/15/problem/D">Codeforces - Map</a></li>
<li><a href="http://codeforces.com/contest/873/problem/E">Codeforces - Awards for Contestants</a></li>
<li><a href="http://codeforces.com/contest/5/problem/C">Codeforces - Longest Regular Bracket Sequence</a></li>
<li><a href="https://codeforces.com/contest/487/problem/B">Codeforces - Strip</a></li>
<li><a href="https://codeforces.com/gym/100570/problem/A">Codeforces - LCM Query</a></li>
</ul>

Finally to read more about sparse tables:

## References

* [CP Algorithms](https://cp-algorithms.com/data_structures/sparse-table.html#precomputation)
* [Geeks For Geeks](https://www.geeksforgeeks.org/sparse-table/)
* [CP Algorithm Gym](https://codeforces.com/blog/entry/15729)
