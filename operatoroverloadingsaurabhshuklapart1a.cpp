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
Complex sum(Complex c)
{
    Complex temp;
    temp.a=a+c.a;//pehla a offcourse caller object ka a hai.
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
    c3=c1.sum(c2);//c3=c1+c2 ham nahi likh sakte kyonki directly non primitive data add nahi hoga.
    c3.displaydata();
    return 0;
}