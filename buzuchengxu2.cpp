#include<iostream>
#include<string>
using namespace std;

struct S
{
	int a, b;
	string str;

	S operator+(const S &others)
	{
		S s1;
		s1.a = this->a + others.a;
		s1.b = this->a + others.a;
		s1.str += this->str;
		s1.str += others.str;
		return s1;
	}
};

int main()
{
	S s1, s2,s3;
	s1.a = 5;
	s1.b = 5;
	s1.str = "Hello, ";
	s2.a = 6;
	s2.b = 6;
	s2.str = "World!";
	s3 = s1 + s2;
	cout<<s3.a<< endl;
	cout <<s3.b << endl;
	cout<< s3.str << endl;
}
