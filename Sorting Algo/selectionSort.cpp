#include <iostream>
using namespace std;
int main()
{
  int a[] = {998, 776, 223, 456, 767};

  int n = 5;

  for (int i = 0; i < n-1; i++)
  {
    int smallIndex = i;
    for (int j = i+1; j < n; j++)
    {
     if (a[j]>a[smallIndex])
     {
       smallIndex = j;
     }

    }
    swap(a[i], a[smallIndex]);
    
  }
  

  for (int i = 0; i < n; i++)
  {
    cout << a[i] <<" ";
  }
  
  return 0;
}