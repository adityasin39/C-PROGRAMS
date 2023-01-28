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
    void printdata()
    {
        cout << "The complex no is " << a << " + " << b << "i" << endl;
    }
    friend complex sumcomplex(complex, complex);
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, c3;
    c1.setdata(3, 5);
    c1.printdata();
    c2.setdata(5, 6);
    c2.printdata();
    c3 = sumcomplex(c1, c2);
    c3.printdata();
    return 0;
}