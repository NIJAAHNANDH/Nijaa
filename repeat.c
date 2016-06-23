#include <stdio.h>
int main()
{
    int arr[1000],arr1[100]={0},num,k;
	scanf("%d",&num);
	for(k=1;k<=num;k++)
		scanf("%d",&arr[k]);
	for(k=1;k<=num;k++)
    	arr1[arr[k]]++;
    for(k=1;k<=num;k++)
    {
    	if(arr1[arr[k]]>1)
    	{
    		printf("%d",arr[k]);
    		break;
    	}
    }
	return 0;
}
