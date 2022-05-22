#include<stdio.h>
int main()
{
	int a[10][10],es=0,os=0,c,i,j,r;
    scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i%2)
			os+=a[i][j];
			else
			es+=a[i][j];
		}
	}
	printf("%d %d",es,os);
	

}
