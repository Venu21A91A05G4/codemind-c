#include<stdio.h>
int prime(int n);
int main()
{
    int n,d,rev=0,k;
    scanf("%d",&n);
    k=n;
    while(n)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    if(prime(k)&&prime(rev))
    {
        printf("circular prime");
    }
    else if(prime(k) && prime(rev)!=1)
    printf("prime but not a circular prime");
    else
    printf("not prime");
}
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}