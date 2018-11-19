#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class A {
public:
    virtual~A(){cout<<"destructor A"<<endl;}};
class B:public A
{public:
    ~B(){cout<<"destructor B"<<endl;};
};
int main()
{
    A *p=new B();
    delete p;
    return 0;
}
