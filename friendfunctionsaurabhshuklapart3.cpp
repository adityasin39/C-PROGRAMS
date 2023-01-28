#include<iostream>
using namespace std;
class Complex
{
private:
int a,b;
public:
void setdata(int x, int y)
{
    a=x;
    b=y;
}
void showdata()
{
    cout<<"The complex no is "<<a<<" +i"<<b<<endl;
}
friend Complex operator+(Complex e, Complex f);


};
Complex operator+(Complex e,Complex f)

{
    Complex temp;
    temp.a=e.a+f.a;
    temp.b=e.b+f.b;
    return temp;
}
int main(){
    Complex c1,c2,c3;
    c1.setdata(6,5);
    c1.showdata();
    c2.setdata(2,4);
    c2.showdata();
    c3=c1+c2;//or c3=operator+(c1,c2) yeh actual way hai friend function ko call karne ka but operator overloading as a friend function mein hum still informal way(c3=c1+c2) use kar sakte hain bas uska explanation change ho jaaega. Explanation is ki + operator call hua aur usme c1,c2 do arguments pass hue.
    c3.showdata();
    return 0;
}