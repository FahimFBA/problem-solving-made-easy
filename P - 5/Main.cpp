#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the value for N: ";
    int n;
    cin >> n;
    cout << "\n<-- The Multiplication Table for " << n << " -->" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }
    return 0;
}