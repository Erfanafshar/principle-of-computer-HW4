#include <stdio.h>
int main (void){
    int k , n=0 , i , s=1 ;
    int num[2*n+1] , x[2*n+1];
    float a , z , A=1.0 , B=1.0 , C=0.0 , D=0.0 , l=1.0 , E=0;
    printf("enter a and z and n: ");
    scanf("%f",&a);
    scanf("%f",&z);
    scanf("%d",&n);
    for(i=1 ; i<(2*n)+2 ; i++)
    {
        s*=i;
        num[i]=s;
        l*=z;
        x[i]=l;
    }
    for(k=0 ; k<(2*n)+2 ; k++)
    {
        A*=(4*k*k+a*a);
        B*=((2*k+1)*(2*k+1)+a*a);
    }
    for(k=0 ; k<(2*n)+2 ; k++)
    {
        C+=((A*x[2*n])/num[2*n]);
        D+=((B*a*x[2*n+1])/num[2*n+1]);
    }
    E=C+D;
    printf("%f",E);
}
