#include <stdio.h>
int main()
{
    int a[1000],b[100]={0},n,t;
	scanf("%d",&num);
	for(t=1;t<=n;t++)
		scanf("%d",&a[t]);
		for(t=1;t<=n;t++)
    	b[a[t]]++;
    	for(t=1;t<=n;t++)
    {
    	if(b[arr[t]]>1)
    	{
    		printf("%d",a[t]);
    		break;
    	}
    }
	return 0;
}
