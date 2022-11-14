## Segment Tree
## Why segment tree?

Let's say we want a range of values that we need to apply operations on, for example, we need the sum of elements from index 1 to index 3 of
```
  arr[] = {4,-9,3,7,1,0,2};
```
We can use a prefix sum:
See more about prefix sums in the following link: [Click here to view notes on prefix sum](https://github.com/mirzaazwad/Competitive-Programming/tree/main/CategoryWisePersonalNotesTutorialsAndProblemsSolved/Data%20Structures/RangeQueries/Prefix_Array)

But let's say now we have queries of upto 10<sup>5</sup> and an array of range upto 10<sup>5</sup>. Each query gives us indices forSo using prefix sum no longer works because of the risk of getting a time limited exceeded in comepetitive programming platforms. So now you need a data structure called segment tree.

Prerequisites for understanding segment tree:
* Recursion
* Merge Sort
* Divide and Conquer

The essence of Divide and Conquer is that it breaks a problem into subproblems and then it finds the results for these subproblems and then you merge these results to compute the result for the bigger problems.

So essentially now we are going to implement a tree with the following properties:
* The idea is creating a binary tree.
* We implement it by breaking the array into 2 equal halves, the range should be  predefined

The first step of the idea:

```cpp
int mid=(left+right)/2;
```

As per the mid we break the range into equal halves.
So we keep dividing the array into smaller and smaller portions.

![Array Split First Split](https://github.com/mirzaazwad/Competitive-Programming/blob/main/CategoryWisePersonalNotesTutorialsAndProblemsSolved/Data%20Structures/RangeQueries/SegmentTree/ArraySplitFirst.png)

Now if you precompute the sums for the left half and the right half and store it, you can easily compute the sum for the larger array. I suppose we can understand intuitively that the halves have to be further split till we reach an array of size 1. we do know the sum of the 1-sized portion which is the value itself. Using this we can compute the sum for the larger array.

![DivideSum](https://github.com/mirzaazwad/Competitive-Programming/blob/main/CategoryWisePersonalNotesTutorialsAndProblemsSolved/Data%20Structures/RangeQueries/SegmentTree/DivideSum.png)

Even though the image may seem complex but the idea is pretty simple. We break the array into smaller portions and then we find the value for the smallest portion which is essentially the leaf node of the tree. Since we do know the sum for the leaf nodes then we can use that to compute the sum for the bigger arrays by the sum of the nodes to the left or to the right. 

Now if we assume that all the segments in the picture are nodes then we can get a binary tree. Every node contains the sum of that particular portion or halve. This is the essence of a segment tree. Now the question may arise as to how we obtain the sum from index i to j since we are breaking the entire array and then finally we get the sum of the entire array.

Now let's observe the array differently, in a different tree like structure:

![Segment Tree Picture](https://github.com/mirzaazwad/Competitive-Programming/blob/main/CategoryWisePersonalNotesTutorialsAndProblemsSolved/Data%20Structures/RangeQueries/SegmentTree/TreeBuild.png)

Observe that its basically the same as the array tree observed earlier but this time we only showed the segments or the ranges. For instance the 3rd node shows a range of 5 to 7.



## Initialize the segment tree
```cpp
#define MAX 100001
int arr[MAX];
int tree[MAX*3];
 void init(int node,int l,int r){
 {
  if(l==r)
    {
    tree[node]=arr[l];
    return;
   }
   int left=node*2;
   int right=left+1;
   int mid=(left+right)/2;
   init(left,l,mid);
   init(right,mid+1,r);
   tree[node] = tree[l] + tree[r];
  }
```





## References

### Bangla Tutorial for Segment Tree:
* [Segment Tree Part 1 Basics Bangla](http://www.shafaetsplanet.com/?p=1557)
* [Segment Tree Part 2 Lazy Propagation Bangla](https://www.shafaetsplanet.com/?p=1591)
### English Tutorials:
* [Segment Tree CP Algorithms](https://cp-algorithms.com/data_structures/segment_tree.html)
* [Segment Tree Codeforces](https://codeforces.com/blog/entry/15890)
### Tutorial Videos:
* [Segment Tree Section](https://www.youtube.com/channel/UCozCCU3b1HmcmCf2gLN_7HA/videos)




Then based on the level order indexing we initialise the tree array.

```cpp
  // N*3+1 where N is the length of the array being converted to segment tree.
  int tree[N*3+1];
  // 8 5 3 -5 10 1 2 4 -9 3 7 1 0
```
## Update Function in Segment Tree
```cpp
void update(int node, int l, int r, int i, int newval)
{
  if(i>right || i<left){
    return;
  }
  if(left>=i && right<=i){
    tree[node]=newval;
    return;
  }
  int left=2*node;
  int right=left+1;
  int mid=(left+right)/2;
  update(left,l,mid,i,newval);
  update(right,mid+1,r,i,newVal);
  tree[node]=tree[left]+tree[right];
}
```

Essentially, the idea is recursion but the recursion is carried out by pruning some of the branches to make the update process more efficient.




