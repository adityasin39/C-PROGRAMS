/*Primitive data types can be converted into each other easily as compiler does automatic conversion.
E.g.int x=5;
float y=x;  so compiler will make y as 5.00 something.
Similarly, float x=4.4;
int y=x;  so compiler will ignore 0.4 and make y as 4.
But problem arises when we have to convert primitive to class type or class type to primitive or class type to another class type.
E.g. complex c;
int x;
c=x;// This will give error as primitive is being converted to class type.
We can fix this issue by making a constructor.



*/
#include <iostream>
class Complex
{
private:
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void displayData()
    {
        std::cout << "The value of a is " << a << std::endl;
        std::cout << "The value of b is " << b << std::endl;
    }
};
int main()
{
    Complex c; // As we have made a parameterized constructor so the compiler wont make a default constructor so we need to make a default constructor for this line.
    int x = 5;
    c = x; // this will give error so we have made a constructor. Also here the constructor gets called and x is passed as an argument.
    c.displayData();

    return 0;
}