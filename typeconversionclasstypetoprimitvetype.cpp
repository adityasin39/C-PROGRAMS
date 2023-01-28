#include <iostream>
/*x=c; will give error so in this type of conversion i.e. class type to primitive, we need to use casting operator which has the syntax:
operator datatype()
{
    return datatype;
}
 The normal form of an overloaded casting operator function, also known as a conversion function.



*/
class Complex
{
private:
    int a, b;

public:
    Complex(int g, int f)
    {
        a = g;
        b = f;
    }
    operator int()
    {
        return a;
    }

    void displayData()
    {
        std::cout << "The value of a is " << a << std::endl;
        std::cout << "The value of b is " << b << std::endl;
    }
};
int main()
{
    Complex c(3, 4);
    int x;
    x = c; // It is like c is calling operator int() and the value which is returned comes in place of c.
    c.displayData();
    std::cout << "The value of x is " << x << std::endl;

    return 0;
}