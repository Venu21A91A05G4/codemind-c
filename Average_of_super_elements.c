

#include<stdio.h>
int main()
{
    int i,j,n,a[200],c=0,f=0,s=0,flag=0;
     float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
                if(a[i]==a[j])
                c++;

        }
       if(c==a[i])
      {
          flag=1;
         f++;
         s+=a[i];
         a[i]=0;
      }
    }
    if(flag==0)
    printf("-1");
    else
    {
    avg=(float)s/f;
    printf("%.2f",avg);
    }   
}

