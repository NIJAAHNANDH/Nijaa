#include <iostream>
using namespace std;

int main() {
	int n,t1=0,i,t2=1,nt=0;
	cin>>n;
	cout<<t1<<"\t"<<t2<<"\t";
    for (i=3; i <= n; ++i)
    {
        nt=t1+t2;
        t1=t2;
        t2=nt;
        cout<<nt<<"\t";
    }
	return 0;
}
