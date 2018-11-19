#include<iostream>
using namespace std;
int main(){
    int n,x,y,l;
    cin>>n>>x>>y;
    l=n-y/x;
    l=l-y%x;
    if (l>0)
        cout<<l;
    else
        cout<<0;
    return 0;
}
