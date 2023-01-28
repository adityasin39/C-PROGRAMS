#include <iostream>
// here we are dealing with inheritance and the order of call of constructors,destructors so we have made use of dynamic memory allocation so that we can destruct the object by ourselves and see the call of destructors.
// We always make constructors and destructors public so that they can be called.
class Base
{
public:
    Base()
    {
        std::cout << "Base constructor" << std::endl;
    }
    virtual ~Base()
    {
        std::cout << "Base destructor" << std::endl;
    }
};
class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Derived constructor" << std::endl;
    }
    ~Derived()
    {
        std::cout << "Derived destructor" << std::endl;
    }
};
int main()
{
    Base *p1 = new Base;
    delete p1;
    std::cout << "-----------------------" << std::endl;
    Derived *p2 = new Derived;
    delete p2; // We know that execution of constructors is from base to derived and execution of destructors is derived to base.
    std::cout << "-----------------------" << std::endl;

    Base *p3 = new Derived;
    delete p3; // If virtual is not written then as Derived class object is made so Derived class constructor is called which calls base constructor as usual then when we delete the object then the compiler does early binding type of thing and sees the type of pointer and thus call only base destructor and thus derived class object is not destroyed which leads to memory leak.
    // Now to get the output like we got in the second case then we will have to make the base class destructor virtual to do late binding type of thing.Thus the base class destructor becomes a virtual destructor.Also the derived class destructor becomes virtual but it is not overriden so this is a bit different from virtual functions.
    // A constructor can never be made virtual because it is called at the time of object formation.In C++, the constructor cannot be virtual, because when a constructor of a class is executed there is no virtual table in the memory, means no virtual pointer defined yet. So, the constructor should always be non-virtual. 
    //As a guideline, any time you have a virtual function in a class, you should immediately add a virtual destructor (even if it does nothing). This way, you ensure against any surprises later. 

    return 0;
}