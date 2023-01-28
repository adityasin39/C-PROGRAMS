#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void showdata()
    {
        cout << "Sum is " << a + b<<endl;
    }

    friend void fun(complex);
};
void fun(complex c)
{
    cout << "Product is " << c.a*c.b<<endl;//Here, you cant directly write or access a and b. i.e. you cant write a*b directly because you dont know about a and b i.e. they are a and b of which object so to make it meaningful we pass an object and then write using the object.
}
int main()
{
    complex c1;
    c1.setdata(2, 3);
    c1.showdata();
    fun(c1);
    return 0;
}