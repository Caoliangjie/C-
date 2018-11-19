#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{

    string s="132";
    while(
    next_permutation(s.begin(),s.end()))//全排列函数,可以实现1-的全排列,记一下.
    {
     cout<<s<<endl;
    }
    return 0;
}
