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
Integer operator++()//Pre increment mein int likhne ka koi lafda nahi aur pre ke case mein ++i1 or formal call(as in  line 27 ) dono bina kisi problem ke chalte hain.
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
    i2=i1.operator++();//Pre increment example.
    i1.displaydata();
    i2.displaydata();
    return 0;
}