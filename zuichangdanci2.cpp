#include<iostream>
using namespace std;
 int main()
 { char input[500];
 cin.getline(input, 500);
 int end = 0;
 int count = 0;
 int longest = 0;
  int i = 0;
  while (i < 500)
    { if (input[i] != ' '&&input[i] != ','&&input[i] != '.')
     { count++;
     i++;
     if (count > longest) {
          longest = count;
          end = i;
  }//和我的想法有点像.
  } if (input[i] == ' ' || input[i] == ',' )
  { count = 0; i++; }
  if (input[i] == '.'|| input[i] == '\0' )
    break;
    }
  for (int j = end - longest;j < end;j++)
    { cout << input[j];
   }
   return 0;
    }


