#include <stdio.h>

int main(){
int A,B,C,D,Max;
int num1, num2, num3;
int a, b, c;
scanf("%d %d %d %d",&A, &B, &C, &D);
if (A>B && A>C && A>D){
Max=A;
num1=B;
num2=C;
num3=D;
}
if (B>A && B>C && B>D){
Max=B;
num1=A;
num2=C;
num3=D;
}
if (C>B && C>A && C>D){
Max=C;
num1=B;
num2=A;
num3=D;
}
if (D>A && D>B && D>C){
Max=D;
num1=B;
num2=C;
num3=A;
}
a=num1+num2-Max;
b=num2+num3-Max;
c=num3+num1-Max;
printf("%d %d %d ",a,b,c);
return 0;
}
