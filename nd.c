#include <stdio.h>
int main()
{
    int a[1000],b[100]={0},n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
        for(k=0;k<n;k++)
    	   {
    	   if(a[i]+a[j]==a[k])
    		    printf("%d %d %d\n",i,j,k);
    		  }
    		}
    	}
	return 0;
}
