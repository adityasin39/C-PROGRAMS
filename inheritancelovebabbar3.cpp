#include<iostream>
// Multilevel inheritance example
using namespace std;
class Animal
{
 public:
 int age;
 int weight;
 void speak()
 {
    cout<<"Speaking"<<endl;
 }
};
class Dog : public Animal
{

};
class GermanShepherd : public Dog
{

};
int main(){
  GermanShepherd g;
  g.speak(); 
    return 0;
}