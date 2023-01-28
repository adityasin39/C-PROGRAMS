#include<iostream>
/*here, we are converting class type to another class type. This can be done in two ways 1. by making a constructor in the class to which we are converting the other class.2. by using casting operator function in the class which needs to be converted.
We made product class before because we wanted to make product class object in the constructor of Item class.
We cannot access the private variables of the Product class so we have used public functions to access them.



*/
class Product
{
private:
int a,b;
public:
  Product(int x, int y)
  {
    a=x;
    b=y;
  }
  void display()
  {
    std::cout<<"The value of a is "<<a<<std::endl;
    std::cout<<"The value of b is "<<b<<std::endl;
  }
  int geta()
  {
    return a;
  }
  int getb()
  {
    return b;
  }
  
};
class Item
{
private:
int m,n;
public:
Item(){}
Item(Product p)
{
   m=p.geta();
   n=p.getb();
}
void displaydata()
{
    std::cout<<"The value of m is "<<m<<std::endl;
    std::cout<<"The value of n is "<<n<<std::endl;
}
};

int main(){
    Product p(3,4);
    p.display();
    Item i;//For this line, we have made default constructor.
    i=p;
    i.displaydata();

    
    return 0;
}