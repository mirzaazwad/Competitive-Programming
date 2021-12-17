# Introduction to Number Theory
## GCD(Greatest Common Divisor)
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
	 return 0;
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

## Prime Number Determination

Mathematically, one can define a prime number as one that is not divisible by any number other than 1 and itself. So one can imagine a brute force approach to this problem
quite easily but then again that isn't the most efficient approach to solving this problem. Below we discuss the brute force approach and how it becomes something that
may be the cause of the TLE's you may be getting in those prime number problems.  

```CPP

#include<iostream>
using namespace std;

bool isPrime(int n){
	for(int i=1;i<n;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
         cout<<isPrime(5)<<endl;
	 return 0;
         }
```

So basically this approach is a bit like if there is a number i that can divide n within the range 0<i<n then this is not prime, but this approach is very redundant and unnecessary and can lead one to a TLE or CPU Limit Exceeded. For this we have the sieve of Eratosthenes. The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million and such. [Again a wikipedia link](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
For a detailed overview, please visit geeks for geeks, basically just [Click HERE!!!](https://www.geeksforgeeks.org/sieve-of-eratosthenes/).


```CPP

#include<iostream>
using namespace std;

bool isPrime(int n){
	for(int i=2;i*i<=n;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
         cout<<isPrime(5)<<endl;
	 return 0;
         }
```
A brief implementation of the idea. Make sure i starts from 2, it is a common mistake.

```Python3
def isPrime(a):
	i=2
	while(i*i<=a):
		if(a%i==0):
			return False;
		i+=1
	return True
```

Also this is the python code for the same algorithm.

