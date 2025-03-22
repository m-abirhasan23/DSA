#include <iostream>
using namespace std;
int main()
{
  int a[] = {9, 7, 4, 5, 2, 3};
  int n = 6;
  for (int i = 0; i < n - 1; i++){
    for (int j = 0; j < n-i-1; j++)
    {
      if (a[j]>a[j+1])
      {
        swap(a[j], a[j + 1]);
      }
      
    }
    
  }

for (int i = 0; i < n; i++)
{
  cout << a[i] ;
}

  return 0;
}


// int swaps (int a,int b){
//   int temp = 0;
//   if (a>b)
//   {
//     temp = a;
//     a = b;
//     b = a;
//   }

//   return a, b;
// }