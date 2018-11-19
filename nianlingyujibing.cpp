
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    double f,a,b,c,d,n;
    int x[1000];
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>x[i];
    for (int i=0;i<n;i++)
    {
        if (x[i]<=18)
            a++;
        else if ((x[i]>18)&&(x[i]<=35))
            b++;
        else if ((x[i]>35)&&(x[i]<=60))
            c++;
        else
            d++;
    }
    f=a+b+c+d;
    cout<<"1-18: "<<setiosflags(ios::fixed)<<setprecision(2)<<(a/f)*100.00<<"%"<<endl;
cout<<"19-35: "<<setprecision(2)<<(b/f)*100.00<<"%"<<endl;
cout<<"36-60: "<<setprecision(2)<<(c/f)*100.00<<"%"<<endl;
cout<<"60-: "<<setprecision(2)<<(d/f)*100.00<<"%"<<endl;
return 0;
}
