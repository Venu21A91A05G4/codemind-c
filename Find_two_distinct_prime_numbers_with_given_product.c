#include<stdio.h>
#include<math.h>
int prime(int);
int prime(int a)
{
    int i,j,c=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}
int main()
{
    int i,j,n,c,a;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(prime(i))
        {
            for(j=1;j<=n;j++)
            {
                if(prime(j))
                {
                    if(i*j==n)
                    {
                        printf("%d %d",i,j);
                        return 0;
                    }
                }
            }
        }
    }
    printf("-1");
}