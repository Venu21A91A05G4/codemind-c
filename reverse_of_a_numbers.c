#include<stdio.h>
int main()
{
    int n,d,rem=0,s=0;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        s=s*10+rem;
        n/=10;
    }
    printf("%d",s);
}