#include <stdio.h>
int main()
{
    int arr[1000],number,i,j,temp,k;
	scanf("%d",&number);
	for(i=1;i<=number;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&k);
	for(i=1;i<=number;i++)
	{
		for(j=i+1;j<=number;j++)
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
