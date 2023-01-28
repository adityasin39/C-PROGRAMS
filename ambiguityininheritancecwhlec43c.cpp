#include<iostream>
//here we have single inheritance.
using namespace std;
class A
{
   public:
   void func()
   {
    cout<<"I am in A"<<endl;
   }
};
class B: public A
{
 public:
 void func()
 {
    cout<<"I am in B"<<endl;
 }
};

int main(){
    B obj;
    obj.func();//jiska object banaya uss class ke function preference milega.
    A Obj;
    Obj.func();//yaha A ka object hai isliye A wala function chalega. This is function overriding.Agar class B ke func ko private kar de aur B ka object bana ke func ko call kare toh error dega kyonki preference toh B wale func ko hi milega aur woh private hai.
    return 0;
}