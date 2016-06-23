#include <stdio.h>
int main()
{
    int a[1000],n,i,u,k,l,s=0,s1=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	u=n/2;
    for(i=0;i<=u;i++)
    {
    		s=s+a[i];
    		k=s/u;
    }
    for(i=u;i<n;i++)
    {
    		s1=s1+a[i];
    		l=s1/u;	
    }
    if(k==l)
    	printf("Possible");
   else
   		printf("Not possible");
	return 0;
}
