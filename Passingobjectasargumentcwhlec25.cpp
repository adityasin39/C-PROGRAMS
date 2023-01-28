#include<iostream>
using namespace std;
class complex
{
    private:
    int a, b;
    public:
    void setData(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void printData()
    {
        cout<<"The complex no. is "<<a<<"+i"<<b<<endl;
    }
    void sum(complex c1, complex c2)
    {
      a=c1.a+c2.a;
      b=c1.b+c2.b;
      
    }
};
int main(){
   complex c1,c2,c3;
   c1.setData(2,4);
   c1.printData();
   c2.setData(3,6);
   c2.printData();
   c3.sum(c1,c2);
   c3.printData();


    return 0;
}