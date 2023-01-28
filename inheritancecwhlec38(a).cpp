#include <iostream>
//Single inheritance deep dive.
using namespace std;
class Base
{
private:
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base::setdata()
{
    data1 = 5;
    data2 = 10;
}
int Base::getdata1()
{
    return data1;
}
int Base::getdata2()
{
    return data2;
}

class Derived : public Base
{
private:
    int data3;

public:
    void process();
    void display();
};
void Derived::process()
{
    data3 = getdata1() * data2;//As data1 is a private member of Base class so it is inaccessible, hence we are calling function(which is public) to get its value.
}
void Derived::display()
{
    cout << "The value of data1 is " << getdata1() << endl;//As data1 is a private member of Base class so it is inaccessible, hence we are calling function(which is public) to get its value. 
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
}
int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}