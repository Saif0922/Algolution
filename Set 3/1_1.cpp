#include <bits/stdc++.h>
using namespace std;
 
bool IsPrime(int i)
{
    if (i % 2 == 0 && i != 2)
        return false;
 
    else {
        for (int j = 3; j <= sqrt(i); j += 2) {
            if (i % j == 0)
                return false;
        }
        return true;
    }
}
 
int main()
{
    int c = 0;
    int N = 72;
 
    for (int i = 2;i <= sqrt(N); i++) {
        if (IsPrime(i)) {
            if (N % i == 0) {
                c++;
                if (IsPrime(N / i) && i != (N / i)) {
                    c++;
                }
            }
        }
    }
    cout << pow(2, c) - 1<< endl;
    return 0;
}