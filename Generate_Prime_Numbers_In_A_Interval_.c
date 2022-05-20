


#include<stdio.h>
int main()
{
    int m,n,i,fc=0,j;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        fc=0;
       for(j=1;j<=i;j++)
       {
           if(i%j==0)
           fc++;
       }
       if(fc==2)
       printf("%d
",i);
    
    }
}