
#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,s[100],i,c=0,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&s[i]);
    scanf("%d%d",&a,&b);
    for(i=1;i<=n;i++)
       {
           if(s[i]<a)
           {
               c=1;
           printf("%d ",s[i]);
           }
           else if(s[i]>b)
           {
               c=1;
               printf("%d ",s[i]);
           }
       }
       if(c==0)
       printf("-1");
}

