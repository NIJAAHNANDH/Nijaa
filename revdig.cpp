#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int n,m;
	cin>>n;
	//m=n;
	while(n)
	{
		cout<<n%10;
		n/=10;
	}
	return 0;
}
