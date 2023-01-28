#include<iostream>
using namespace std;
class Employee
{
    private:
    int id;
     static int count;
     public:
     void setid(void);
     void displayid(void);
     static  void countin(void);
};
int Employee::count;
void Employee::setid()
{
    cout<<"Enter your id"<<endl;
    cin>>id;
    count++;
}
 void Employee::countin()
{
//  cout<<id; // throws an error
  cout<<"You are Employee no. "<<count<<endl;
}
void Employee::displayid()
{
    cout<<"Employee no. "<<count<<" Your id is "<<id<<endl;
}

int main(){
 Employee e1,e2,e3;
 e1.setid();
 e1.displayid(); 
 Employee::countin(); 
  e2.setid();
 e2.displayid();
 Employee::countin(); 

 e3.setid();
 e3.displayid();
 Employee::countin(); 

    return 0;
}