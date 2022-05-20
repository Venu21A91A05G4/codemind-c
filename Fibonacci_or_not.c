#include<stdio.h>
int main()
{
    int n,i,s=0,a=0,b=1,c;
    scanf("%d",&n);
    for(i=0;i<1000;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(n==a)
        {
            printf("True");
            break;
        }
        else
        {
           s++;
         }
    }
    if(s==1000)
    {
        printf("False");
    }
}