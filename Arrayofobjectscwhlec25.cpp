#include<iostream>
using namespace std;
class Employee
{
  private:
  int id;
  public:
  void setid(void)
  {
      cout<<"Enter the id"<<endl;
      cin>>id;
  }
  void displayid(void)
  {
      cout<<"The id is "<<id<<endl;
  }
};
int main(){
    Employee Atlassian[5];
    for(int i=0; i<5; i++)
    {
        Atlassian[i].setid();
        Atlassian[i].displayid();

    }   

    return 0;
}