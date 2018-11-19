#include<iostream>
using namespace std;
int main(){
    int n,a,b,c,d,e,f;
    cin>>n;
    a=n/100;
    cout<<a<<endl;
    b=(n-a*100)/50;
    cout<<b<<endl;
    c=(n-a*100-b*50)/20;
    cout<<c<<endl;
    d=(n-a*100-b*50-20*c)/10;
    cout<<d<<endl;
    e=(n-a*100-b*50-20*c-10*d)/5;
    cout<<e<<endl;
    f=n-a*100-b*50-20*c-10*d-5*e;
    cout<<f<<endl;
    return 0;
}
