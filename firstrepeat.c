#include <stdio.h>
int main()
{
    int arr[1000],b[100]={0},n,k;
	scanf("%d",&num);
	for(k=1;k<=n;k++)
		scanf("%d",&arr[k]);
	for(k=1;k<=n;k++)
    	b[arr[k]]++;
    for(k=1;k<=n;k++)
    {
    	if(b[arr[k]]>1)
    	{
    		printf("%d",arr[k]);
    		break;
    	}
    }
	return 0;
}
