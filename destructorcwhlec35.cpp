#include<iostream>
using namespace std;
int count=0;
class num
{
    public:
    num()
    {
        count++;
        cout<<"Constructor is called for object "<<count<<endl;
    }
    ~num()
    {
        cout<<"Destructor is called for object "<<count<<endl;
        count--;
    }
};
int main(){
  cout<<"We are inside main function"<<endl;
  cout<<"Creating 1st object"<<endl;
  num n1;
  {
      cout<<"Creating two more objects"<<endl;
      num n2,n3;

  }  
  cout<<"Back to main function"<<endl;
    return 0;
}