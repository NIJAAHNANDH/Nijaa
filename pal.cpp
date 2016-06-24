#include <iostream>
using namespace std;

int main() {
	int n, reversedInteger = 0, remainder, originalInteger;
    cin>>n;
    originalInteger = n;
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    if(originalInteger == reversedInteger)
        cout<<"is a palindrome";
    else
        cout<<"is not a palindrome";
    
	return 0;
}
