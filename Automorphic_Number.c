#include<stdio.h>
int main()
{
    int n,i,c,s,d=1;
    scanf("%d",&n);
    s=n*n;
    c=n;
    while(n)
    {
        d*=10;
        n/=10;
    }
    if(s%d==c)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}