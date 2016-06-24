#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int i;
	char a[10000];
	cin>>a;
	int l=strlen(a);
	for(i=l-1;i>=0;i--)
		cout<<a[i];
	return 0;
}
