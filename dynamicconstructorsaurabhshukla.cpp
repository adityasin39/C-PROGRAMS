#include <iostream>
using namespace std;
// A constructor which dynamically allocates memory to a member of an object is called a dynamic constructor.So we are initializing the objects dynamically.
// A constructor does not create an object or does not create memory for an object infact it gets called after the object gets memory.
// Myth: A constructor which is called by a dynamically created object is called a dynamic constructor. Reality: A dynamically created object always calls a normal constructor. And a constructor in which there is dynamic memory allocation is called a dynamic constructor.
class A
{
private:
    int a, b, *p;

public:
    A(int x, int y, int z)
    {
        p = new int;
        a = x;
        b = y;
        *p = z;
    }
    void displaydata()
    {
        cout << "The values are " << a << "," << b << "," << *p << endl;
    }
};
int main()
{
    A obj(3, 4, 5); // or A obj=A(3,4,5); Similarly we can write A obj; as A obj=A();
    obj.displaydata();
    return 0;
}