#include<stdio.h>
int main()
{
    int n,d,i,a[50],flag=0;
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        a[i]=0;
    }
    while(n)
    {
        d=n%10;
        a[d]++;
        n/=10;
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>1)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}