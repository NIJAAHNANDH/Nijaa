#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number=1;
    cin >> n;
    int p= 1;
    int s = 1;
    while (s < (number * 0.5))
    {
        if (n % s == 0)
        {
            int factor = s;
            p = factor;
            while(!(factor == 0))
            {
                int mod = factor % 10;
                factor = factor / 10;
                p*= mod;
            }
            if (p == number)
            {
                cout << s;
                return 0;
            }
        }
        s++;
    }
}
