#include <stdio.h>
int main()
{
    int arr[1000],d,num,i;
	scanf("%d",&num);
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&d);
    for(i=d;i<num;i++)
    		printf("%d ",arr[i]);
    for(i=0;i<d;i++)
    		printf("%d ",arr[i]);		
	return 0;
}
