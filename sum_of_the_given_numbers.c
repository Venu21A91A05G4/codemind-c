#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<2*n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<2*n;i+=2)
    {
        sum=0;
        sum+=a[i]+a[i+1];
        printf("%d
",sum);
    }
}