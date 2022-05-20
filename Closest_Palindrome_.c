#include<stdio.h>
#include<math.h>
int palindrome(int);
int palindrome(int a)
{
    int d,re=0,s=a;
    while(a)
    {
        d=a%10;
        re=re*10+d;
        a/=10;
    }
    if(re==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,i,j,c=0,s,k;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(palindrome(i))
        s=i;
    }
    i=a+1;
    while(1)
    {
        if(palindrome(i))
        {
            k=i;
            break;
        }
        i+=1;
    }
int x,y,ans;
x=abs(a-s);
y=abs(a-k);
if(x==y)
{
    printf("%d %d",s,k);
}
else
{
    ans=(x<y)?s:k;
    printf("%d",ans);
}
}