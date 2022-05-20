#include<stdio.h>
int main()
{
    int n,i,a[100],oi=0,ei=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2)
        oi+=a[i];
        else
        ei+=a[i];
    }
    printf("%d", (ei-oi));
}
