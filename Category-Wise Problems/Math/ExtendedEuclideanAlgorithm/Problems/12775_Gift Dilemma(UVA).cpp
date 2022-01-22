//Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4628

#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

long long gcd(long long a, long long b, long long& x, long long& y) {
if (b == 0) {
x = 1;
y = 0;
return a;
}
long long x1, y1;
long long d = gcd(b, a % b, x1, y1);
x = y1;
y = x1 - y1 * (a / b);
return d;
}

bool find_any_solution(long long a, long long b, long long c, long long &x0, long long &y0, long long &g) {
g = gcd(abs(a), abs(b), x0, y0);
if (c % g) {
return false;
}
x0 *= c / g;
y0 *= c / g;
if (a < 0) x0 = -x0;
if (b < 0) y0 = -y0;
return true;
}

void shift_solution(long long & x, long long & y, long long a, long long b, long long cnt) {
x += cnt * b;
y -= cnt * a;
}
long long find_all_solutions(long long a, long long b, long long c, long long minx, long long maxx, long long miny, long long maxy) {
long long x, y, g;
if (!find_any_solution(a, b, c, x, y, g))
return 0;
a /= g;
b /= g;
long long sign_a = a > 0 ? +1 : -1;
long long sign_b = b > 0 ? +1 : -1;
shift_solution(x, y, a, b, (minx - x) / b);
if (x < minx)
shift_solution(x, y, a, b, sign_b);
if (x > maxx)
return 0;
long long lx1 = x;
shift_solution(x, y, a, b, (maxx - x) / b);
if (x > maxx)
shift_solution(x, y, a, b, -sign_b);
long long rx1 = x;
shift_solution(x, y, a, b, -(miny - y) / a);
if (y < miny)
shift_solution(x, y, a, b, -sign_a);
if (y > maxy)
return 0;
long long lx2 = x;
shift_solution(x, y, a, b, -(maxy - y) / a);
if (y > maxy)
shift_solution(x, y, a, b, sign_a);
long long rx2 = x;
if (lx2 > rx2)
swap(lx2, rx2);
long long lx = max(lx1, lx2);
long long rx = min(rx1, rx2);
if (lx > rx)
return 0;
return (rx - lx) / abs(b) + 1;
}

int main()
{
    fastio;
    int t;
    cin >> t;
    
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<": ";
       long long a,b,c,p,x,y,z,g;
       cin>>a>>b>>c>>p;
       g=__gcd(__gcd(a,b),c);
       if(p%g!=0){
           cout<<0<<endl;
           continue;
       }
       a/=g;b/=g;c/=g;p/=g;
       long long tot=0;
       for(long long z=0;;z++){
           long long val=p-c*z;
           if(val<0)break;
           tot+=find_all_solutions(a,b,val,0,p,0,p);
       }
       cout<<tot<<endl;
    }
    return 0;
}
