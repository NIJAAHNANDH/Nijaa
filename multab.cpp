#include <iostream>
using namespace std;

int main() {
	int n,m,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cout<<j<<" * "<<i<<" = "<<j*i<<endl;
	return 0;
}
