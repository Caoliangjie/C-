#include<iostream>
using namespace std;
class CType{
public:
    CType(){
    cout<<"CType contrunctor"<<endl;}
    ~CType() { cout<<"CType destructor"<<endl;}
    };
class CEngine {
public:
    CEngine(){
    cout<<"CEngine contructor"<<endl;}
    ~CEngine(){
    cout<<"CEngine destructor"<<endl;
    }
};
class CCar {//封装类
private:
    CEngine engine;
    CType type;
public:
    CCar(){cout<<"CCar contructor"<<endl;}
    ~CCar(){cout<<"CCar destructor"<<endl;}
};
int main(){
    CCar car;
    return 0;
}
