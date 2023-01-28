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
      
};
int main(){
    Meta facebook;
    // facebook.company();// As all the above base classes have company function and the derived class does not have the company function, hence the compiler is getting confused in calling the company function and this is known as ambiguity in inheritance. To solve this problem, we can use scope resolution operator and specify the class of which we want to call the function of.E.g. facebook.Google::company()
    facebook.Google::company();//Here ambiguity is resolved.Ambiguity in inheritance occurs mainly in multiple inheritance.
    Amazon Alexa;
    Alexa.company();//yaha Amazon wala function chalega aur koi ambiguity nahi aaegi kyonki object Amazon class ka hai.
    return 0;
}