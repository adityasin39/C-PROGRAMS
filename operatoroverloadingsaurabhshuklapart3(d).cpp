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
Integer operator++()
{
    Integer i;
    i.a=++a;
    return i;
}
};
int main(){
    Integer i1,i2;
    i1.setdata(5);
    i1.displaydata();
    i2=++i1;//Pre increment example.
    i1.displaydata();
    i2.displaydata();
    return 0;
}