#include <iostream>
using namespace std;

int main() {
	char a;
	cin>>a;
	if(isalpha(a))
		cout<<"You have entered alphabet";
	else
		cout<<"Its not a alphabet";
	return 0;
}
