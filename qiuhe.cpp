#include<iostream>
using namespace std;
int main(){
    int n,l;
    int a[5]={};
    cin>>n;
    for (int i=0;i<5;i++)
      {
          cin>>a[i];
          if (a[i]<n)
                l+=a[i];}
    cout<<l<<endl;
return 0;
}
