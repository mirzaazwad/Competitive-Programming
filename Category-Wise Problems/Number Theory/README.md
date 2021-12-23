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

So let's discuss the complexitiyies, so we have time complexity of O(log(min(a,b))) and a space complexity of O(1).

## Prime Number Determination

Mathematically, one can define a prime number as one that is not divisible by any number other than 1 and itself. So one can imagine a brute force approach to this problem
quite easily but then again that isn't the most efficient approach to solving this problem. Below we discuss the brute force approach and how it becomes something that
may be the cause of the TLE's you may be getting in those prime number problems.  

```CPP

#include<iostream>
using namespace std;

bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0)return false;
	}
	return true;
}
int main(){
         cout<<isPrime(5)<<endl;
	 return 0;
         }
```

This approach is basically O(N) and if you wanted to make a list of prime numbers with this approach usinng a nested loop, it basically goes upto O(N<sup>2</sup>) which is not very efficient. Time is the issue here.

So basically this approach is a bit like if there is a number i that can divide n within the range 1<i<n then this is not prime, but this approach is very redundant and unnecessary and can lead one to a TLE or CPU Limit Exceeded. For this we have the sieve of Eratosthenes. The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million and such. [Again a wikipedia link](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)
For a detailed overview, please visit geeks for geeks, basically just [Click HERE!!!](https://www.geeksforgeeks.org/sieve-of-eratosthenes/).
Furthermore, I would discuss Sieve in greater details in the section below.


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
A brief implementation of an idea. Make sure i starts from 2, it is a common mistake.
It is not sieve but more efficient that the brute force approach.
It is more like a relatively efficient approach with your complexity reduced to O(squareroot(N)) and for a list it is still efficient and becomes O(N).


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


## Sieve of Eratosthenes

Let's assume a number sequence, say 1, 2, 3, 4, 5, 6.......n. 

In order to find the prime numbers in this sequence we do the following steps:

1) First cancel out all even numbers
2) Then cancel out all squares of odd numbers

A very brief way to approach the sieve algortihm. 

```CPP
// C++ program to print all primes
// smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
	// Create a boolean array
	// "prime[0..n]" and initialize
	// all entries it as true.
	// A value in prime[i] will
	// finally be false if i is
	// Not a prime, else true.
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for (int p = 2; p * p <= n; p++)
	{
		// If prime[p] is not changed,
		// then it is a prime
		if (prime[p] == true)
		{
			// Update all multiples
			// of p greater than or
			// equal to the square of it
			// numbers which are multiple
			// of p and are less than p^2
			// are already been marked.
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = 2; p <= n; p++)
		if (prime[p])
			cout << p << " ";
}

// Driver Code
int main()
{
	int n = 30;
	cout << "Following are the prime numbers smaller "<< " than or equal to " << n << endl;
	SieveOfEratosthenes(n);
	return 0;
}

```
So time for some explanation, in the above methods to determine prime numbers, or making a prime number list we uncovered that checking till i\*i<=n is a more efficient way to determine prime numbers.
