# Introduction to Number Theory
This is a fairly new, addition to the tutorials
So regarding number theory, we first start of with the idea of gcd(greatest common divisor), also known as hcf(highest common factor)
This is a brief yet complete introduction to the properties of gcd. [Click Here](https://people.math.sc.edu/howard/Classes/580f/hw4.pdf)
For more details about gcd, and a quite okayish overview, we know the common place to look into [Click Here, PS It's Wikipedia](https://en.wikipedia.org/wiki/Greatest_common_divisor)
After going through the first link, I suppost one can perceive how the euclidean gcd is determined. To represent this algorithmically:
```CPP
#include<iostream>
using namespace std;

int gcd(int a,int b){
            if(b==0)return a;
            else return gcd(b,a%b);
            }
int main(){
         cout<<gcd(3,6)<<endl;
         }
```
This is the C++ code to determine gcd for 3,6. The output would be 3. 
Below is the example python code implementation for a gcd function:
```Python3
def gcd(a,b):
	if(b==0):
		return a
	else:
		return gcd(b,a%b)
```
A good introductory problem to gcd with medium difficulty is discussed below, 

[Codeforces 1617B](https://codeforces.com/contest/1617/problem/B)
