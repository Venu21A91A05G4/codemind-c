
#include<stdio.h>
int main()
{
    int a[100][100],n,i,j,c,nsum=0,csum=0;
    scanf("%d%d",&n,&c);
    for(i=0;i<n;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
       // nsum+=a[i]
        for(j=0;j<c;j++)
        {
            csum+=a[i][j];
        }
    }
    printf("%d",csum);
}
