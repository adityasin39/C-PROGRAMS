#include <iostream>
using namespace std;
double vol(double r, double h)
{
    return 3.14 * r * r * h;
}

double vol(double a)
{
    return a * a * a;
}
double vol(double l, double b, double h)
{
    return l * b * h;
}
int main()
{
    cout << "The volume of cylinder is " << vol(7, 6) << endl;
    cout << "The volume of cube is " << vol(3) << endl;
    cout << "The volume of cuboid is " << vol(3, 6, 4) << endl;

    return 0;
}