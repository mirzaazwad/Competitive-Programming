#include <stdio.h>

int main()
{
int n;
int x=0;
char inp[3];

scanf("%d",&n);
char tmp;
for(int i=0;i<n;i++){
    scanf("%s",inp);
    if(inp[0]=='X'){
        if (inp[2]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    else if(inp[2]=='X'){
        if (inp[0]=='+'){
            x++;
        }
        else{
        x--;}
    }

}
printf("%d",x);
    return 0;
}
