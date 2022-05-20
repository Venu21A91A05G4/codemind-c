#include<stdio.h>
int prime(int);
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
int main()
{
    int n,d,s=0,dc=0;
    scanf("%d",&n);
    if(prime(n))
    {
        while(n)
        {
            d=n%10;
            if(prime(d))
            s++;
            dc++;
            n/=10;
        }
    }
    else
    {
        printf("Not Mega Prime");
        return 0;
    }
    if(s==dc)
    printf("Mega Prime");
    else
    printf("Not Mega Prime");
}