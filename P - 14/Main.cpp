// You have to take a character as input from the user and print that in the console everytime until the user types 'q'.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    while (1)
    {
        cout << "Enter any character; Press 'q'/'Q' to terminate the program:  ";
        cin >> ch;
        if (ch == 'q' || ch == 'Q')
        {
            cout << "You have commanded to quit the program!" << endl;
            return 0;
        }
        cout << "The character that you provided is: " << ch << endl;
    }
    return 0;
}