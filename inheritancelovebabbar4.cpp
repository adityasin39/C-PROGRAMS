#include<iostream>
//Multiple inheritance example.
using namespace std;
class Human
{
public:
string color;
void speak()
{
    cout<<"Speaking"<<endl;
}
};
class Animal
{
  public:
  int age, weight;
  void bark()
  {
    cout<<"Barking"<<endl;
  }
};
class Hybrid: public Animal, public Human
{

};
int main(){
  Hybrid h;
  h.speak();
  h.bark();  
    return 0;
}