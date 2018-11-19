#include<iostream>
using namespace std;
int main(){
    int n,i=10;
    cin>>n;
    while (i<n)
        {if (i%(i/10+i%10)==0)
            {cout<<i<<endl;}
            i++;}
}
