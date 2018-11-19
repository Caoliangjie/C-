#include<iostream>
using namespace std;
int main(){
int m,n;
int a[1000]={};
    cin>>n>>m;
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n-m;i++)
        a[n+i]=a[i];
    for (int i=n-m;i<2*n-m;i++)
        cout<<a[i]<<' ';
}
