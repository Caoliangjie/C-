#include<iostream>
using namespace std;
int main()
{
    int n,k;
    int a[1000000]={};
    cin>>n;
    cin>>k;
    for (int i=0;i<n;i++)
      {
          cin>>a[i];
        if ((i>0)&&(a[i]<a[i-1]))
            a[i]=a[i-1];}
    cout<<a[n-k];
    return 0;
}
