#include<iostream>
using namespace std;

int main(){
    int a,b,x;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    try
    {

     if((a-b)==0)
     {
        throw 404;
     }
    x=a/(a-b);

    cout<<"The value of x is "<<x<<endl;

    }
    catch(int c)
    {
        cout<<"Error "<<c<<endl;
    }
    
    
    return 0;
}
// One of the advantages of C++ over C is Exception Handling. Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. There are two types of exceptions: a)Synchronous, b)Asynchronous (i.e., exceptions which are beyond the program’s control, such as disc failure, keyboard interrupts etc.). The catch statement takes a single parameter.There is a special catch block called the ‘catch all’ block, written as catch(…), that can be used to catch all types of exceptions. In C++, try/catch blocks can be nested. Also, an exception can be re-thrown using “throw; “.  When an exception is thrown, all objects created inside the enclosing try block are destroyed before the control is transferred to the catch block.