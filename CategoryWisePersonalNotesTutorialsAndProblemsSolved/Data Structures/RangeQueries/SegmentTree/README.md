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


Bangla Tutorial for Segment Tree: [Segment Tree Part 1 Bangla](http://www.shafaetsplanet.com/?p=1557)
                                  [Segment Tree Part 2 Bangla](https://www.shafaetsplanet.com/?p=1591)

Initialize the segment tree
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
  }
```


