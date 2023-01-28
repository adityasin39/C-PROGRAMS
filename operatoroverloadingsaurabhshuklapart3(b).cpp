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
Integer operator++(int)//Bracket mein int likhna padega if i1++ likh kar call kar rahe hain kyonki post and pre increment mein kuch toh fark hona chahiye compiler ko distinguish karne ke liye. Ye int likhne ka matlab yeh  nahi ki int argument pass ho raha hai, yeh sirf distinguish karne ke liye hai aur waise bhi pre and post increment unary operator hai toh argument pass nahi hoga.
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
    i2=i1++;//Post increment example.
    i1.displaydata();
    i2.displaydata();
    return 0;
}