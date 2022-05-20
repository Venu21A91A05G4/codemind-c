#include<stdio.h>
int main()
{
  int n,a[200],i,s=0,c=0;
  float avg;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
      s+=a[i];
  }
  avg=(float)s/n;
  printf("%.2f",avg);
  

}