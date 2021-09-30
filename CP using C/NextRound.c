#include <stdio.h>
#include <string.h>
int main(){

   int n,k,temp,count;
   scanf("%d %d", &n, &k);
   int part[n];
   for(int i=0;i<n;i++){
        scanf("%d",&part[i]);
   }

int max_ix;
   // One by one move boundary of unsorted subpartay
    for (int i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted partay
        max_ix = i;
        for (int j = i+1; j < n; j++)
          if (part[j] > part[max_ix])
            max_ix = j;

        // Swap the found minimum element with the first element
        swap(&part[max_ix], &part[i]);
    }
     //So the ith participants score is
   int score=part[k-1];
   count=0;
   int same=0;
   for(int a=0;a<n;a++){
        if  (part[a]>score && part[a]!=0){
            count++;
            same=0;
        }
        else if (part[a]==score && part[a]!=0){
            count++;
            same++;
        }
        if (same==n && part[a]==0){
            count=0;
        }


   }

   printf("%d",count);

   return 0;
}


/*

*/
    void swap(int *x, int *y){
        int temp=*x;
        *x=*y;
        *y=temp;
    }
