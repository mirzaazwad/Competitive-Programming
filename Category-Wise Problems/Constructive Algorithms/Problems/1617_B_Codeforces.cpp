/*
Date: 17/12/21
https://codeforces.com/contest/1617/problem/B

Method-1
Brute Force Approach, worst case O(n) 
From this we can come up with an idea for a brute force solution, we know that a,b and c has to be distinct as stated in the question. 
based on the requirement of the question, a+b+c=n and gcd(a,b)=c, if gcd(a,b)=1, a+b+1=n, b=n-1-a
So we take c=1=gcd(a,b)=gcd(a,n-a-1), for brute force we can loop for a => 2 to n, to find a value such that the relationship holds, 
but why 2? since the numbers are distinct and c=1.

*/
    #include <bits/stdc++.h>
     
    #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
     
    #define endl "\n"
     
    using namespace std;
     
    int gcd(int a, int b){
        if(b==0)return a;
        else return gcd(b,a%b);
    }
     
    void solve(){
        long long n;
        cin>>n;
        for(int i=2;i<n;i++){
            if(gcd(i,n-i-1)==1){
                cout<<i<<" "<<n-i-1<<" "<<1<<endl;
                return;
            }
        }
    }
     
    int main()
    {
        fastio;
        int t;
        cin >> t;
        
        while(t--)
        {
           solve();
        }
        return 0;
    }
/*
Method-2
First some number theory, through this I came accross some new stuff such as https://people.math.sc.edu/howard/Classes/580f/hw4.pdf which introduced me to Bezout's theorem,
basically "ax+by=1 for x and y are integers and gcd(a,b)=1 and a,b are relatively prime or coprime"---(i), 
also "I understood that two consecutive numbers are coprime or relatively prime"---(ii)
as well as understanding that "gcd(a,b)=gcd(a,b+k*a) for k is a constant and a>0"---(iii).
and also that "gcd(a,b)=gcd(b,a)" Yes its commutative in a way but the idea remains the same as gcd is basically the highest common factor and hence the numbers swapping 
positions doesn't change the number of common factors.
gcd(a,a)=a
gcd(a/x,b/x)=gcd(a,b)/x

For the constructive algorithm approach, first we consider a random variable say x and x is divisible by 4, and also we fix c to be a default, c=1, as per method-1.
We also note that remainder of any number divisible by 4 lies in the range of 0 to 3, in other words any number divisible by n has remainder from 0 to n-1.
Then we follow these steps:
1) n%2=0 or n%4=2, which means that x=4n+2, it also means that taking a+1+b=n [Here a+1=x and b=2, so a=x-1], and taking b=2, a+2+1=n=> a+3=n => a=n-3 and hence, gcd(n-3,2)=1
2) n%4=3 which means that x=4n+3, it also means that (x-3)/4=n, in this case gcd(n/2-2,n/2+2)=1 so taking n/2+2+n/2-2+1=1 using the idea that consecutive odd numbers(that differ
by 2 or 4) has a gcd of 1. But in this case n is an odd number so upon division we get floor division so (n-1)/2 but here (n-1)/2 yields an odd number, so (n-1)/2-2 and (n-1)/2+2 would
be odd as odd-even=odd, so 2 consecutive odd numbers yield a gcd of 1.
3) n%4=1 which means that x=4n+1, it also means that (x+1)/4=n,  in this case gcd(n/2-1,n/2+1)=1 so taking n/2-1+n/2+1+1=1 using the same idea that consecutive odd numbers
have a gcd of 1 as stated in 2, in this case, (n-1)/2 would yield an even number, as n%4=1 and so (n-1) is divible by 4 and hence it can be divided by 2 twice.
Keeping these in mind we can also implement a solution using constructive algorithm
*/
#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL) //This is essentially to speed up input and output operations

#define endl "\n"

using namespace std;

int gcd(int a, int b){//the algorithm for the euclidian approach to determining gcd
    if(b==0)return a;
    else return gcd(b,a%b);
}

void solve(){//the solution
    long long n;
    cin>>n;
    if(n%2==0)cout<<n-3<<" "<<2<<" "<<1<<endl;
    else if(n%4==1)cout<<n/2-1<<" "<<n/2+1<<" "<<1<<endl;
    else if(n%4==3)cout<<n/2-2<<" "<<n/2+2<<" "<<1<<endl;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
       solve();
    }
    return 0;
}
