#include<iostream>
using namespace std;
int main()
{
    int h,r;
    float y,f;
    const float pi=3.14159;
    const int z=20000;
    cin>>h>>r;
    y=h*r*r*pi;
    f=(int)(z/y)+1;
    cout<<f;
    return 0;
}
