#include <iostream>//Namespace declarations can be nested within another namespace.In each scope, a name can only represent one entity. So, there cannot be two variables with the same name in the same scope. Using namespaces, we can create two variables or member functions having the same name. if the only part of the std namespace that you intend to use is cout, you can refer to it as follows:
//using std::cout;
//Subsequent code can refer to cout without prepending the namespace, but other items in the std namespace will still need to be explicit.A class can also be declared inside namespace and defined outside namespace
using namespace std; // Actually cout,cin,etc are also a part of the namespace called standard that is std which is in the iostream header so we include this header in
// source file. Like done in Myspace, we have to specify the namespace std everytime we use them. But by using namespace std we can avoid them now the question arises that can I do using namespace Myspace and get rid of writting again and again.
// The answer is yes. But it wont serve the purpose if we have a variable of the same name from another namespace and we will get name conflict.
namespace Myspace
{
    int a;
    int f1();
    class A // We can define a whole class also in a namespace.
    {
    public:
        void fun1();
    };
}
// using namespace Myspace;//Even though I have written using namespace Myspace before the function definition , we still have to mention the namespace as we are defining it not using it.
int Myspace::f1() // When defining a function outside namespace, we have to specify the namespace with the :: operator.
{
    cout << "Hello f1" << endl;
}
void Myspace::A::fun1() // Here as it is in a class so we have to specify class also.
{
    cout << "Hello fun1" << endl;
}
int main()
{
    Myspace ::a = 5; // so to access any of the members(be it functions, variables, class) of the namespace , we have to specify the namespace everytime.
    cout << Myspace::a << endl;
    Myspace::f1();
    Myspace::A obj; // even while using the class we have to specify the namespace.
    obj.fun1();

    return 0;
}