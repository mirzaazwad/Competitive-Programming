#include <stdio.h>

int main(){
int n,tmp,x;
scanf("%d",&n);
if(n>=100){
    if(n%100==0)
        printf("%d",n/100);
    else{
        tmp=n/100;
        x=tmp;
        n-=tmp*100;
        if(n>=50){
            if(n%50==0)
                printf("%d",x+n/50);
            else{
                tmp=n/50;
                x+=tmp;
                n-=tmp*50;
                if(n>=20){
                    if(n%20==0)
                    printf("%d",x+n/20);
                    else{
                        tmp=n/20;
                        x+=tmp;
                        n-=tmp*20;
                        if(n>=10){
                            if(n%10==0){
                                printf("%d",x+n/10);
                            }
                            else{
                                tmp=n/10;
                                x+=tmp;
                                n-=tmp*10;
                                if(n>=5){
                                    if(n%5==0){
                                        printf("%d",x+n/5);
                                    }
                                    else{
                                        tmp=n/5;
                                        x+=tmp;
                                        n-=tmp*5;
                                        printf("%d",x+n);
                                    }
                            }

                        }
                        }
                        else if(n>=5){
                                if(n%5==0){
                                    printf("%d",x+n/5);
                                }
                                else{
                                    tmp=n/5;
                                    x+=tmp;
                                    n-=tmp*5;
                                    printf("%d",x+n);
                                }
                            }
                        }

                    }
                    else if(n>=10){
                            if(n%10==0){
                                printf("%d",x+n/10);
                            }
                            else{
                                tmp=n/10;
                                x+=tmp;
                                n-=tmp*10;
                                if(n>=5){
                                    if(n%5==0){
                                        printf("%d",x+n/5);
                                    }
                                    else{
                                        tmp=n/5;
                                        x+=tmp;
                                        n-=tmp*5;
                                        printf("%d",x+n);
                                    }
                            }

                        }
                        }
                        else if(n>=5){
                                    if(n%5==0){
                                        printf("%d",x+n/5);
                                    }
                                    else{
                                        tmp=n/5;
                                        x+=tmp;
                                        n-=tmp*5;
                                        printf("%d",x+n);
                                    }
                            }

                    }

        }
        }
        }
        else{
        if(n>=20){
                    if(n%20==0)
                    printf("%d",x+n/20);
                    else{
                        tmp=n/20;
                        x+=tmp;
                        n-=tmp*20;
                        if(n>=10){
                            if(n%10==0){
                                printf("%d",x+n/10);
                            }
                            else{
                                tmp=n/10;
                                x+=tmp;
                                n-=tmp*10;
                                if(n>=5){
                                    if(n%5==0){
                                        printf("%d",x+n/5);
                                    }
                                    else{
                                        tmp=n/5;
                                        x+=tmp;
                                        n-=tmp*5;
                                        printf("%d",x+n);
                                    }
                            }

                        }
                        }
                        else if(n>=5){
                                if(n%5==0){
                                    printf("%d",x+n/5);
                                }
                                else{
                                    tmp=n/5;
                                    x+=tmp;
                                    n-=tmp*5;
                                    printf("%d",x+n);
                                }
                            }
                        }

                    }
        }
        return 0;
}







