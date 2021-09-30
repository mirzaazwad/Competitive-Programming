#include<stdio.h>


int main ()
{

    int a,b,s,y;
    scanf("%d%d",&a,&b);
    s=a;
    while(s/b>0)
    {
        a = a+s/b;
        y = s%b;
        s = s/b+y;
    }
    printf("%d",a);
    return 0;
}
