#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, temp;
	cout << "Enter the value for A: ";
	cin >> a;
	cout << endl << "Enter the value for B: ";
	cin >> b;
	// swapping process
	temp = a;
	a = b;
	b = temp;
	cout << "\n<-- After swapping -->" << endl;
	cout << "A: " << a << " B: " << b << endl;
}