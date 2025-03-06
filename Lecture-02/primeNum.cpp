#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "ENTER A NUMBER: ";
    cin >> num;
    bool isPrime;
    for (int i = 2; i < num - 1; i++)
    {
        if (i % 2 == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        /* code */
        cout << num << " is a prime number";
    }
    else
    {
        cout << num << " is not a prime number";
    }

    return 0;
}