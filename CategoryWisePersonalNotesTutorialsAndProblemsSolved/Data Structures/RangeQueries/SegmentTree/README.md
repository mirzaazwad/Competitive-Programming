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



