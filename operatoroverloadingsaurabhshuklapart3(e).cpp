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
Integer operator++()     //agar dono pre and post increment ke functions ek hi program mein hai toh 
{                          /* case 1:agar post wale function mein int nahi likha aur formal way mein call kiya toh compiler confuse ho jaaega ki kisko call karna hai aur error dega.
                           /* case 2: agar post wale mein int likh diya aur formal way mein call kiya toh pre increment wala function call hota hai.*/
Integer i;                 /* case 3: agar post wale mein int likh diya toh ++i1 will call pre and i1++ will call post.*/
                           /* case 4: agar post wale mein int nahi likha toh ++i1 and i1++ dono error denge.*/
    i.a=a++;
    return i;
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
    i2=++i1;
    i1.displaydata();
    i2.displaydata();
    return 0;
}