#include<stdio.h>
int happy(int);
int happy(int n)
{
    int d,s=0;
    while(n)
    {
        d=n%10;
        s+=d*d;
        n/=10;
    }
    if(s==1)
    {
        return 1;
    }
    else if(s==4)
    {
         return 0;   
    }
    else
    {
        return happy(s);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(happy(n))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}