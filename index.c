#include <stdio.h>
int main(void) 
{
	int number,arr[1000],i;
	scanf("%d",&number);
	for(i=1;i<=number;i++)
		scanf("%d",&arr[i]);
	for(i=1;i<=number;i++)
	{
		if(i==arr[i])
			printf("%d ",i);
	}
	return 0;
}
