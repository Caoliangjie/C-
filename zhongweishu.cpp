#include <iostream>
 using namespace std;
 int main()
 { int n, a[15000];
  while (cin >> n)
    { if (n == 0) break;
  for (int i = 0; i < n; i++)
    { cin >> a[i]; }
   if (n == 1)
    { cout << a[0] << endl; }
   if (n == 2)
    { cout << (a[0] + a[1]) / 2 << endl; }
    if (n != 1 && n != 2)
        {
             for (int i = 0; i < n - 1; i++)
             { for (int j = 1; j < n - i; j++)
             { if (a[j - 1] > a[j])
             { int temp = a[j];
    a[j] = a[j - 1];
    a[j - 1] = temp;
    }
    }
    }
     if (n % 2 == 0)
        cout << (a[n / 2 - 1] + a[n / 2]) / 2 << endl;
     if (n % 2 == 1)
        cout << (a[n / 2]) << endl;
      }
     }
     return 0;
      }
