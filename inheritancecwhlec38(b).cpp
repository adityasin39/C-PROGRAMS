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

class Derived : private Base
{
private:
    int data3;

public:
    void process();
    void display();
};
void Derived::process()
{
    setdata();
    data3 = getdata1() * data2;
}
void Derived::display()
{
    cout << "The value of data1 is " << getdata1() << endl;
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
}
int main()
{
    Derived der;
    // der.setdata();//Here visibility mode is private so setdata becomes private in derived class so we cannot call it outside class hence this line no 51 is giving error so we need to comment it. Instead what we can do is call setdata function inside the class like we can call it in process function as done in line no.39
    der.process();
    der.display();

    return 0;
}