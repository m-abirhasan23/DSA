#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "ENTER NUMBER: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum = sum + i;
        cout << sum << endl;
    }

    cout << sum;

    return 0;
}