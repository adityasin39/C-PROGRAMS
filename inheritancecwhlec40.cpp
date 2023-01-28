#include<iostream>
//Multilevel inheritance deep dive.
using namespace std;
/*If we are inheriting B from A and C from B:[A>--B>--c]
  1.A is the base class for B and B is the base class for C.
  2.A>--B>--c is called the Inheritance path.
  */ 
class Student
{
private:
int rollnumber;
public:
void setrollnumber(int);
void getrollnumber();
};
void Student:: setrollnumber(int n)
{
    rollnumber=n;
}
void Student:: getrollnumber()
{
    cout<<"Your roll number is "<<rollnumber<<endl;
}
class Exam:public Student
{
 protected:
float mathsmarks,physicsmarks;
public:
   void setmarks(float,float);
   void getmarks();
};
void Exam:: setmarks(float m, float p)
{
    mathsmarks=m;
    physicsmarks=p;
}
void Exam:: getmarks()
{
    cout<<"Your marks in maths is "<<mathsmarks<<endl;
    cout<<"Your marks in physics is "<<physicsmarks<<endl;
}
class result:public Exam
{
    private:
    int percentage;
    public:

      void displaypercentage();
};
void result:: displaypercentage()
{
    getrollnumber();
    getmarks();

    percentage = (mathsmarks + physicsmarks)/2;
    cout<<"Your percentage is "<<percentage<<endl;
}
int main(){
 result r;
 r.setrollnumber(10441);
 r.setmarks(93.4,98.6);
 r.displaypercentage();   
    return 0;
}