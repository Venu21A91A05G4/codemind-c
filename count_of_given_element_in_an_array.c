

#include<stdio.h>
int main()
{
    int n,i,a[100],oi=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
       if(m==a[i])
       oi++;
    }
    printf("%d",oi);
}

