#include <stdio.h>
int main()
{
    int arr[1000],b[100]={0},num,i;
	scanf("%d",&num);
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
		for(i=0;i<num;i++)
    	b[arr[i]]++;
    for(i=0;i<num;i++)
    {
    	if(b[arr[i]]==1)
    	{
    		printf("%d",arr[i]);
    		b[arr[i]]=0;
    	}
    }
	return 0;
}
