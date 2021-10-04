    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<ctype.h>
    #include<stdbool.h>
    #include<math.h>
     
     typedef struct{
         int x;
         int a;
     }dat;
     dat neg[100];
     dat pos[100];

    int cmp (const void * a, const void * b)
    {
    dat *data_1 = (dat *)a;
    dat *data_2 = (dat *)b;
    return ( data_1-> x - data_2-> x );
    }
    int cmpr (const void * a, const void * b)
    {
    dat *data_1 = (dat *)a;
    dat *data_2 = (dat *)b;
    return ( data_2-> x - data_1-> x );
    }

    int main(void){
        int n;
        scanf("%d",&n);
        int b,y;
        int negcnt=0,poscnt=0;
        for(int i=0;i<n;i++){
            scanf("%d %d",&b,&y);
            if(b<0){
                neg[negcnt].x= b;
                neg[negcnt++].a=y;
            }
            else{
                pos[poscnt].x=b;
                pos[poscnt++].a=y;
            }
        }

        int steps=0;
        qsort(neg,negcnt,sizeof(dat),cmpr);
        qsort(pos,poscnt,sizeof(dat),cmp);
        bool right;
        if(negcnt<poscnt){
            for(int i=0;i<negcnt;i++){
                    steps+=(neg[i].a+pos[i].a);
            }
            steps+=pos[negcnt].a;
     
        }
        else if(poscnt<negcnt){
            for(int i=0;i<poscnt;i++){
                    steps+=(neg[i].a+pos[i].a);
            }
            steps+=neg[poscnt].a;
        }
        else{
            for(int i=0;i<poscnt;i++){
                    steps+=(neg[i].a+pos[i].a);
            }
        }
        printf("%d",steps);
        return 0;
    }