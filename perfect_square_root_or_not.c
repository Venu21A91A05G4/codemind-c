#include<stdio.h>
#include<math.h>
int main()
{
    int n,rt;
    scanf("%d",&n);
    rt=sqrt(n);
    if(n==rt*rt)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}