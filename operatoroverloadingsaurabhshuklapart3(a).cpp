#include<iostream>
using namespace std;
class Integer
{
private:
int a;
public:
void setdata(int x)
{
    a=x;
}
void displaydata()
{
    cout<<"The value of a is "<<a<<endl;
}
Integer operator++()//Bracket mein int likhne ki zaroorat nahi hai agar formal way mein function ko call kiya hai as in line 27 in the case of post increment.
{
    Integer i;
    i.a=a++;
    return i;
}
};
int main(){
    Integer i1,i2;
    i1.setdata(5);
    i1.displaydata();
    i2=i1.operator++();//Post increment example.
    i1.displaydata();
    i2.displaydata();
    return 0;
}