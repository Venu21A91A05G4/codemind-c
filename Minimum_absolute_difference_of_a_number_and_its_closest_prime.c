#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a,b,m=3000,c,x,y,n,s;
    scanf("%d",&n);
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
s=(x<y)?x:y;
printf("%d",s);
}
