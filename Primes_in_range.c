#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,fc=0,m,c=0,j,flag=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i==1)
        {
            continue;
        }
        fc=0;
        flag=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        c++;
    }
    printf("%d",c);
}