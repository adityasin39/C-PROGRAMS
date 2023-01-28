/*Virtual Base Class
Suppose we have a class A and it gives two classes B and C by heirarchical inheritance and then B and C give a class D by multiple inheritance.
Now suppose A has a variable named a. Due to heirarchical inheritance both B and C will get the variable a and then by multiple inheritance both will pass the variable a to D and now in D , we get the same a variable two timmes so this is ambiguous.
To solve this problem, we make A as virtual base class and then compiler keeps in mind to send only one copy of variable A to D.
We write the word virtual before or after the visibility mode while inheriting.
*/ 
#include<iostream>
using namespace std;
class Student
{
 protected:
 int rollnumber;
 public:
 void setrollnumber(int n)
 {
    rollnumber=n;
 }
 void printrollnumber()
 {
    cout<<"Your roll number is "<<rollnumber<<endl;
 }
};
class Test: virtual public Student
{
  protected:
  float mathsmarks, physicsmarks;
  public:
  void setmarks(float marks1, float marks2)
  {
    mathsmarks=marks1;
    physicsmarks=marks2;
  }
  void displaymmarks()
  {
    cout<<"Your marks in Maths is "<<mathsmarks<<endl;
    cout<<"Your marks in physics is "<<physicsmarks<<endl;
  }
};
class Sports: virtual public Student//We can also write public virtual (i.e. pubic first and then virtual) instead of virtual public. 
{
  protected:
  int score;
  public:
  void setscore(int sc)
  {
    score=sc;
  }
  void displayscore()
  {
    cout<<"Your score in PT is "<<score<<endl;
  }
};
class Result: public Test, public Sports
{
  private:
  float total;
  public:
  void displayresult()
  {
    total=mathsmarks+physicsmarks+score;
    printrollnumber();
    displaymmarks();
    displayscore();
    cout<<"Your total is "<<total<<endl;
  }
};
int main(){
    Result Aditya;
    Aditya.setrollnumber(10441);
    Aditya.setmarks(94.5,75.3);
    Aditya.setscore(50);
    Aditya.displayresult();
    return 0;
}