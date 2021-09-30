#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int mat[5][5];
int x,y;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        scanf("%d",&mat[i][j]);
        if(mat[i][j]==1){
            x=j;
            y=i;

}
    }
}
int num=0;
num=abs(x-2)+abs(y-2);
printf("%d",num);
}
