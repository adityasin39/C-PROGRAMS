#include<iostream>
using namespace std;
class B;
class A
{
  private:
  int a;
  friend void swapdata(A &, B &);
  public:
  void setdata(int x)
  {
    a=x;
  }
  void printdata()
  {
    cout<<"The value of a is "<<a<<endl;
  }
};
class B
{
    private:
    int b;
  friend void swapdata(A &, B &);

    public:
    void setdata(int y)
    {
        b=y;
    }
    void printdata()
    {
        cout<<"The value of b is "<<b<<endl;

    }

};
void swapdata(A &e, B&f)//call by reference..address use karenge toh hi yaha change karne par pichle arguments mein change aayega.
{
    int temp=e.a;
    e.a=f.b;
    f.b=temp;
}
int main(){
    A obj1;
    B obj2;
    obj1.setdata(29);
    obj2.setdata(37);
     obj1.printdata();
    obj2.printdata();

    cout<<"The values after swapping are:"<<endl;
    swapdata(obj1,obj2);
    obj1.printdata();
    obj2.printdata();

    return 0;
}