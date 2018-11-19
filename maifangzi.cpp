#include<iostream>
 #include<math.h>
 using namespace std;
  int main() {
      int N;
       double K;
       while (cin >> N >> K)
        { int flag = 0;
       double rate = (100 + K) / 100;
        for (int i = 0; i < 20; i++)
            { if ((200 * pow(rate, i)) < N*(i + 1))
            { cout << i + 1 << endl; flag = 1; break; } }
        if ((200 * pow(rate, 20) > N * 20) && (flag == 0))
        { cout << "Impossible " << endl;
        };
         } return 0;
         }
