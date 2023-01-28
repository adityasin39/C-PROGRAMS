#include<iostream>
// Single inheritance example
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
int main(){
  Dog d;
  cout<<d.age<<endl;
  cout<<d.weight<<endl;
  d.speak(); 
    return 0;
}