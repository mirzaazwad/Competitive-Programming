# Seven Segment Display

![Seven Segment Image](https://github.com/mirzaazwad/Competitive-Programming/blob/main/Category-Wise%20Problems/Miscellaneous/SevenSegmentDisplayProblems/Images/sevensegment1.jpg)

![Seven Segment Image2](https://github.com/mirzaazwad/Competitive-Programming/blob/main/Category-Wise%20Problems/Miscellaneous/SevenSegmentDisplayProblems/Images/sevensegment2.png)

Essentially how the seven segment display works is by setting certain bit positions as on or 1 or true. Hence that specific LED is activated and hence we can represent the given number 
in seven segment format. Now to deal with these problems the first thing one requires is a prefix array that essentially stores either the set bits for each number or the number
of bits set for each number, I believe the latter to be easier to implement.

The prefix array for number of set bits,

```cpp
int numsetbit[]={6,2,5,5,4,5,6,3,7,6}; //number of set bits as per 7 segment display
```

The prefix array for the set bits is more complicated and bigger and as of yet I do not know if there is an efficient way to generate that array. So here I would just disclose the 
idea, basically create a 2D array, where each internal 1D component or rows represents each number, the rows would store 1 if that bit is set or 0 if that bit is not set.
Now make sure your representation of bits to set is consistent for all the rows or number representations.
