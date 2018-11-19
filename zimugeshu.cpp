#include<iostream>
#include<string.h>
using namespace std;
int  main(){
char s[80]={};
    cin.getline(s,80);
    int a=0,e=0,i1=0,o=0,u=0;
    for(int i=0;i<80;i++)
    {
    if (s[i]=='a')
        a++;
    else
    if (s[i]=='e')
        e++;
    else
    if (s[i]=='i')
    i1++;
    else if (s[i]=='o')
    o++;
    else if (s[i]=='u')
    u++;
    }
    cout<<a<<" "<<e<<" "<<i1<<" "<<o<<" "<<u<<endl;
}
