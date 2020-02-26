#include <stdio.h>
int main (void){
    int n , i , j , k=0 , sum=0 ;
    printf("enter n : ");
    scanf("%d",&n);
    for (i=2 ; i<n+1 ; i++,sum=0 )
    {
        for ( j=1 ; j<i ; j++ )
        {
                if(i%j==0)
                    sum+=j;
        }
        if(sum==i)
            k++;
    }
    printf("%d\n",k);
    for (i=2 ; i<n+1 ; i++,sum=0 )
    {
        for ( j=1 ; j<i ; j++ )
        {
                if(i%j==0)
                    sum+=j;
        }
        if(sum==i)
            printf("%d\n",i);
    }
    return 0;
}





