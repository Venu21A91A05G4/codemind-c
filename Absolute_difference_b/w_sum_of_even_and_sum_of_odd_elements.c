#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,es=0,os=0,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]%2)
       os+=a[i];
       else
       es+=a[i];
    }
    printf("%d",(abs)(es-os));
}