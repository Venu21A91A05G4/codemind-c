#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=100;i++)
    {
        if(n==i*(i+1))
        {
            printf("YES");
            break;
        }
        else
        {
            c++;
        }
        if(c==100)
        {
            printf("NO");
        }
    }
}