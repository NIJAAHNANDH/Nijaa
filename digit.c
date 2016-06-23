#include <stdio.h>
int main()
{
    int arr[1000],n,i,j,temp,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&k);
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=1;i<k;i++)
		printf("%d",arr[i]);
	return 0;
}
