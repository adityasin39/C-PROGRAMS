//overloading of unary operator as a friend function
#include<iostream>
using namespace std;
class Complex
{
private:
int a,b;
public:
void setdata(int x, int y)
{
    a=x;b=y;
}
void showdata()
{
    cout<<"The complex no is "<<a<<" +i"<<b<<endl;
}
friend Complex operator-(Complex);

};
Complex operator-(Complex c)
{
    Complex temp;
    temp.a=-c.a;
    temp.b=-c.b;
    return temp;
}
int main(){
    Complex c1,c2;
    c1.setdata(4,5);
    c1.showdata();
    c2=-c1;//or c2=operator-(c1)
    c2.showdata();

    return 0;
}