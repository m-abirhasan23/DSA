#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;

    cout << "ENTER A NUMBER: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    cout << sum;

    return 0;
}