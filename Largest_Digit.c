#include<stdio.h>
int main()
{
    int n,d,max=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n/=10;
        if(max<d)
        {
            max=d;
        }
    }
     printf("%d",max);
}