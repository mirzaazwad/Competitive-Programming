#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n,countEven=0, countOdd=0;

    printf("Enter Number of students in SWE: ");
    scanf("%d",&n);
int students[n];
int Oddstud[n],Evenstud[n];
printf("\nEnter StudentID: ");
for(int i=0;i<n;i++){

    scanf("%d",&students[i]);
    while(students[i]<101 || students[i]>170){
        printf("\nError: Input Correct studentID: ");
        scanf("%d",&students[i]);
    }
    if(students[i]%2==0){
        Evenstud[countEven]=students[i];
        countEven++;
    }
    else{
        Oddstud[countOdd]=students[i];
        countOdd++;
    }
}

for(int a=0;a<n;a++){
    for(int i=a+1;i<n;i++){
        if(students[a]==students[i]){
            printf("\nRepeated entries found for %d, please re-enter student ID:",students[a]);
            scanf("%d",&students[i]);
            while(students[a]==students[i]){
                printf("\nRepeated entries found for %d, please re-enter student ID:",students[a]);
                scanf("%d",&students[i]);
            }
            if(students[a]%2==0 && students[i]%2!=0){
                countEven--;
                countOdd++;
            }
            else if(students[a]%2!=0 && students[i]%2==0){
                countOdd--;
                countEven++;
            }

        }

    }



}


    printf("\'%d\' students in A group \n \'%d\' students in B group",countOdd,countEven);
    return 0;
}
