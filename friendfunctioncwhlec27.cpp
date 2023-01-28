#include <iostream>
using namespace std;
class complex; // Forward declaration
class calculator
{
    public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumreal(complex , complex );//yahan ham directly define nahi kar sakte kyonki a complex class ka private variable hai aur friend function baad mein banaya hai.
};
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
    friend int calculator :: sumreal(complex , complex );//iss case mein ek class(calculator) ka member function doosre class(complex) ka friend hai matlab calculator class ka member funciton aur complex class ka friend(non member function), isliye membership label lagana padega
    // friend class calculator;//agar hame calculator class ke saare functions par vishwas hai toh we can make the whole class as friend of complex class.
};
int calculator::sumreal(complex o1, complex o2)//iss function ka definition ham calculator class ke baad nahi kar sakte kyonki friend ka declaration complex class mein kiya hai, isliye definition complex class ke baad kiya hai.
{
    return (o1.a + o2.a);
}
//agar complex class calculator classs ke pehle banate toh problem aata kyonki phir compiler sumreal function ko dhooondta.

int main()
{
    complex c1, c2;
    c1.setdata(3, 4);
    c1.printdata();
    c2.setdata(4, 6);
    c2.printdata();
    calculator cal;
    int result;
    result = cal.sumreal(c1, c2);//Although sumreal is a friend function but as it is a member function of calcalutor class so caller object will be there.
    cout << "The sum of real part of c1 and c2 is " << result << endl;
    return 0;
}