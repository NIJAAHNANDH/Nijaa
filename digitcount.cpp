#include <iostream>
using namespace std;

int main() {
	long long int n;
	int c=0;
	cin>>n;
	while(n)
	{
		n/=10;
		c++;
	}
	cout<<c;
	return 0;
}
