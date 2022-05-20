#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,j,a,b,m=3000,c,x,y;
    for (i=1;i<=n;i++)
{
    c=0;
    for (j=1;j<=i;j++)
    {
        if(i%j==0)
            c+=1;
    }
    if(c==2)
        a=i;
}
for (i=m;i>=n;i--)
{
    c=0;
    for (j=1;j<=i;j++)
    {
        if(i%j==0)
            c+=1;
    }
    if(c==2)
        b=i;
}

x=abs(n-a);
y=abs(n-b);
if(x<y)
    return a;
else if(y<x)
     return b;   
else if(x==y)
    return a;
         
}
int main()
{
   int s,a[100],k,res;
   scanf("%d",&s);
   for(k=0;k<s;k++)
   {
       scanf("%d",&a[k]);
   }
   for(k=0;k<s;k++)
   {
       res=prime(a[k]);
       printf("%d
",res);
   }
}