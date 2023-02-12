// Print array elements in the given order and reversely

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the array size: ";
    int arraySize;
    cin >> arraySize;
    int arr[arraySize];
    cout << "Enter the array elements " << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cin >> arr[i];
    }
    // printing the array in the correct order
    cout << "Printing the array in the original order" << endl;
    for (int i = 0; i < arraySize; i++)
    {
        cout << arr[i] << " ";
    }
    // printing the array in the reverse order
    cout << "\nPrinting the array in the reversed order" << endl;
    for (int i = arraySize - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }    
}