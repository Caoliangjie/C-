#include<iostream>
using namespace std;
int main(){
    int n;
    double a[100]={};
    cin>>n;
    for (int i=0;i<n;i++)
{
        cin>>a[i];}
        for (int i=0;i<n;i++){
        if ((a[i]/1.2)>(a[i]/3+50))
               cout<<"Bike"<<endl;
        else if ((a[i]/1.2)<(a[i]/3+50))
           cout<<"Walk"<<endl;
        else
           cout<<"All"<<endl;}
return 0;
}
