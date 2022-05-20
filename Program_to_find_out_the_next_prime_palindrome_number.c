#include<stdio.h>
#include<math.h>
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
    return 1;
    else
    return 0;
}
int prime(int s)
{
    int i,c=0;
    for(i=1;i<=s;i++)
    {
        if(s%i==0)
        c++;
        if(c>2)
        break;
    }
  if(c==2)
  return 1;
  else
  return 0;
}
int main()
{
    int a,i,j,c=0,s,k;
    scanf("%d",&a);
    i=a+1;
   while(1)
   {
       if(palindrome(i) && prime(i))
       {
           k=i;
           break;
       }
       i+=1;
   }
   printf("%d",k);
}