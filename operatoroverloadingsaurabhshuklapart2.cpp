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
    void displaydata()
    {
        cout<<"The complex no is "<<a<<" +"<<b<<"i"<<endl;
    }

   Complex operator-()
   {
    Complex temp;
    temp.a=-a;
    temp.b=-b;
    return temp;
   }


};
int main(){
    Complex c1,c2;
    c1.setdata(3,5);
    c1.displaydata();
    c2=c1.operator-();//or c2=-c1
    c2.displaydata();
    return 0;
}