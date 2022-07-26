# Modular Arithmetic

###### An introduction to modular arithmetic

[Read Here](https://codeforces.com/blog/entry/72527)

```cpp
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

/* Calculate ( a*b ) %c */
ll mulmod(ll a,ll b,ll c)
{
    ll x = 0 , y = a%c ;
    while(b>0)
    {
        if(b%2) x = (x+y)%c ;
        y=(y*2)%c;
        b/=2;
    }
    return x%c ;
}

/* Calculate ( a^b ) %c */
ll bigmod(ll a,ll b,ll c)
{
    ll x = 1 , y = a%c ;
    while( b > 0 )
    {
        if(b%2) x = bigmod(x,y,c) ;
        y=mulmod(y,y,c);
        b/=2;
    }
    return x%c ;
}

/* Calcular a^(-1) for which a*a^(-1)(mod m)=1 */
ll inverseMod(ll a, ll m){
  int s,t;
  if(gcd(a,m,s,t)!=1)return -1;
  else return s;
}
```
