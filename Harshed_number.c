#include<stdio.h>
int main()
{
    int n,d,s=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        s+=d;
        n/=10;
    }
    n=temp;
    if(temp%s==0)
    {
        printf("True");
    }
    else if(temp%s>0)
    {
        printf("False");
    }
}