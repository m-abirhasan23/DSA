#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "ENTER NUMBER: ";
    cin >> num;
    if (num > 0)
    {
        cout << num << " IS POSITIVE NUMBER";
    }
    else
    {
        cout << num << " IS NEGATIVE NUMBER";
    }
}