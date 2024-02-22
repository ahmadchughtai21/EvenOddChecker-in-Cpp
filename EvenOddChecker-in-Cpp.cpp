#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a Number : ";
    int num;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The entered number is EVEN!";
    }

    else
    {
        cout << "The entered number is ODD!";
    }

    return 0;
}