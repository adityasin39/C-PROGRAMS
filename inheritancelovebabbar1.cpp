#include <iostream>
using namespace std;
class Human
{
public:
    int age;
    float height, weight;
    void setage(int a)
    {
        age = a;
    }
    void setheight(float b)
    {
        height = b;
    }
    void setweight(float c)
    {
        weight = c;
    }
    void getage()
    {
        cout << "Your age is " << age << endl;
    }
    void getweight()
    {
        cout << "Your weight is " << weight << endl;
    }
    void getheight()
    {
        cout << "Your height is " << height << endl;
    }
};
class Male : public Human
{
public:
    string color; // So here we have inherited all the functions and the variables of the base class and thus can be accessed by the object of the derived class. Also we can make additional functions and variables in the derived class.

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};
int main()
{
    Male obj;
    obj.setage(20);
    obj.setweight(78);
    obj.setheight(183);
    obj.getage();
    obj.getweight();
    obj.getheight();
    obj.sleep();
    cout << obj.color;

    return 0;
}