#include<stdio.h>
int main()
{
  int n,a[200],i,avg,s=0,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      s+=a[i];
  }
  avg=s/n;
  for(i=0;i<n;i++)
  {
      if(avg==a[i])
      {
      printf("True");
      break;
      }
      else
      {
          c++;
      }
  }
  if(c==n)
  printf("False");

}