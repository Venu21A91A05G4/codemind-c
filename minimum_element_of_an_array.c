#include<stdio.h>
int main()
{
    int n,a[100],min=90000,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    printf("%d",min);
}