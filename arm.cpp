#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int num1, num2, i, n, b, s;
  	cin >> num1>> num2;
  	for(i=num1; i<=num2; i++){
    	    s=0;
        	n=i;
        	for(;n>0;n/=10){
            	b=n%10;
            	s=s+b*b*b;
        	}
       	if(s==i){
            cout << i << endl;
        }
  }
  return 0;
}
