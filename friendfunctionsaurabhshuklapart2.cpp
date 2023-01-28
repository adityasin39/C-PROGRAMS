#include<iostream>
using namespace std;
class B;//forward declaration.This is done in order to tell the compiler that a class named B is there as we have written B in line no.13
class A
{
private :
int a;
public:
void setdata(int x)
{
  a=x;
}
friend void fun(A,B);
};
class B
{
private:
int b;
public:
void setdata(int y)
{
    b=y;
}
friend void fun(A,B);


};
void fun(A o1,B o2)
{
    cout<<"Sum is "<< o1.a+o2.b;
}
int main(){
    A obj1;
    B obj2;
    obj1.setdata(2);
    obj2.setdata(3);
    fun(obj1,obj2);
    return 0;
}