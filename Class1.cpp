#include<iostream>
using namespace std;
class String{
private:
    char *p;
public:
    String (){
    p=new char[10];}
    ~String();
    };
String::~String(){
    delete [] p;
}
int main(){
}
