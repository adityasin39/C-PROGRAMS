#include<iostream>
using namespace std;
class Google
{
   public:
   void company()
   {
    cout<<"I am placed in Google"<<endl;
   }
};
class Amazon
{
     public:
   void company()
   {
    cout<<"I am placed in Amazon"<<endl;
   }

};
class Microsoft
{
     public:
   void company()
   {
    cout<<"I am placed in Microsoft"<<endl;
   }

};
class Apple
{
     public:
   void company()
   {
    cout<<"I am placed in Apple"<<endl;
   }

};
class Meta: public Google, public Amazon, public Microsoft, public Apple
{
    public:
    void company()
    {
        cout<<"I am placed in facebook"<<endl;
    }

};
int main(){
    Meta facebook;
    facebook.company();//In this case, we are not getting ambiguity because this time the company function is present in derived class too and when this happens then the compiler gives preference to the function of the class of which object is made and in this case it is derived class. This is known as function overriding where the compiler has ignored the other company functions.
    return 0;
}