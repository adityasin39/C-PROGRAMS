#include<iostream>
using namespace std;
class Complex
{
private:
int a,b;
public:
void setdata(int x,int y)
{
    a=x;
    b=y;
}
void displaydata()
{
    cout<<"The complex no is "<<a<<" +i"<<b<<endl;
}
Complex operator+(Complex c)
{
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
};
int main(){
    Complex c1,c2,c3;
    c1.setdata(4,5);
    c1.displaydata();
    c2.setdata(5,6);
    c2.displaydata();
    c3=c1.operator+(c2);
    // or line no 31 ko hum c3=c1+c2 abb likh sakte hain i.e. dot and operator word hata sakte hain after operator overloading.
    c3.displaydata();
    return 0;
}