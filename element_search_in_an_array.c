#include<stdio.h>
int fun(int ,int ,int);
int fun(int *ar,int a,int n)
{
	int j;
	for(j=0;j<n;j++)
	{
		if(a==ar[j])
		return 1;
		
	}
	return 0;
}
int main()
{
	int arr[100],n,i,a,ans;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&a);
	ans=fun(arr,a,n);
	if(ans)
	printf("True");
	else
	printf("False");
	
}
