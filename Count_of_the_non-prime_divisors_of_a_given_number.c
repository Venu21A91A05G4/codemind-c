#include<stdio.h>
int fun(int);
int fun(int a)
{
    int i,s=0,d=0;
    if(a==1)
    return 1;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        s++;
    }
    if(s>2)
    return 1;
    else
    return 0;
    
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
         {
           if(fun(i))
           c++;
         }
    }
    printf("%d",c);
}