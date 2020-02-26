#include <stdio.h>
int main (void){
    int a , b , c , k , l , s=0 , u , i , n=0 , r=10 , t=1 , sum_odd=0 , sum_even=0 , d , e;
    int num[10] ;
    printf ("enter a and b :");
    scanf ("%d%d",&a,&b);
    k=a%b;
    a=a/b;
    u=k*1;
    for( i=0 ; i<10 ; i++ )
    {
        t*=r;
        num[i]=t;
    }
    do{
    n+=(a%b)*(num[s]);
    a=a/b;
    s++;
    }while (a!=0);
    c=u+n;
    do {
        sum_odd+=c%10;
        d=c%100;
        c=(c-d)/100;
    }while (c!=0);
    c=u+n;
    c=(c-c%10)/10;
    do {
        sum_even+=c%10;
        d=c%100;
        c=(c-d)/100;
    }while (c!=0);
    if (sum_even==sum_odd)
        printf("True");
    else
        printf("False");
    return 0;
}
