#include<stdio.h>
int main()
{
    int n,m,i,j,d,s=0,s1=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s+=i;
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        s1+=i;
    }
    if(s==m && s1==n)
    printf("Amicable");
    else
    printf("Not Amicable");
}