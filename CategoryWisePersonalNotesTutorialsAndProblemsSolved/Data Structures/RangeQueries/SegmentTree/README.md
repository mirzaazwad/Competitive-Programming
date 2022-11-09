# Segment Tree

```
  arr[] = {4,-9,7,1,0,2};
```

## Why segment tree?

Let's say we want a range of values that we need to apply operations on, for example, we need the sum of elements from index 1 to index 3, we can use a prefix sum:

See more about prefix sums in the following link: [Click here to view notes on prefix sum](https://github.com/mirzaazwad/Competitive-Programming/tree/main/CategoryWisePersonalNotesTutorialsAndProblemsSolved/Data%20Structures/RangeQueries/Prefix_Array)

So essentially now we are going to implement a tree with the following properties:
* The idea is creating a binary tree.
* We implement it by breaking the array into 2 equal halves, the range should be  predefined

The first step of the idea:

```cpp
int mid=(left+right)/2;
```

As per the mid we break the range into equal halves.

Let's consider the following tree:

![Segment Tree Picture](https://github.com/mirzaazwad/Competitive-Programming/blob/main/CategoryWisePersonalNotesTutorialsAndProblemsSolved/Data%20Structures/RangeQueries/SegmentTree/SegTree.png)


## Bangla Tutorial for Segment Tree:
* [Segment Tree Part 1 Bangla](http://www.shafaetsplanet.com/?p=1557)
* [Segment Tree Part 2 Bangla](https://www.shafaetsplanet.com/?p=1591)

## Initialize the segment tree
```cpp
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
![Segment Tree Picture](https://github.com/mirzaazwad/Competitive-Programming/blob/main/CategoryWisePersonalNotesTutorialsAndProblemsSolved/Data%20Structures/RangeQueries/SegmentTree/TreeBuild.png)

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




