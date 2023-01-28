#include <iostream>
using namespace std;
class Test
{

    int a, b;/*line no.16 mein pehle value kisko milegi depends on ki yaha kisko pehle likha hai like for e.g. yaha par a pehle likha hai toh pehle a ko value milegi in line no.16
               line no. 16 mein a and b kisi bhi order mein likhe ho matlab pehle a phir comma phir b ya pehle b phir comma phir a, koi farak nahi padta farak sirf line no.6 ke declaration order se padta hai.
               line no. 6 wale declaration ko hum int a; aise bhi likh sakte hain same cheeze hai.
                                                  int b;




               */
public:
    Test(int x, int y) : a(x), b(y)//This is initialization section or list where instead of intializing the variables in the constructor body, we intialize in this way.Initialization list concept is only for constructors.We can initialize normally in the constructor body too.
   /* Test(int x, int y) : a(x), b(y+x)
   /* Test(int x, int y) : a(x), b(y+a)
   /* Test(int x, int y) : a(x+y), b(y)
   /* Test(int x, int y) : a(x+b), b(y)
   /* Test(int x, int y) : a(x), b(y)
    Run the above lines one by one and apply the above written rule from line no. 6, you can see garbage value in a and b in some cases by apllying the rule.
    Also try int b,a; in line no 6 and try out all the variations as given from line no.17.
    We can also write it as
    Test(int x, int y):a(x)
    {
        b=y;
    }



    */
    {
        cout << "Test constructor executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    Test t(2, 6);
    return 0;
}
