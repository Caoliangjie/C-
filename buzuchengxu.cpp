
#include<iostream>
#include<string>
using namespace std;
struct A {
int n;
A(){};
A(int n_):n(n_){}
	A operator+(const A &others)//用重载符将两个
	{
		A s1;
		s1.n = this->n + others.n;
		return s1;
	}};
int main()
{
    A c,d,e;
    const A a(10);
    d=A(30);
    c=a;
    e=c+d;
    cout<<e.n<<endl;
    return 0;
}
