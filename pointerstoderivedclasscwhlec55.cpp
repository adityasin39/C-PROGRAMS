#include<iostream>
using namespace std;
class Baseclass
{
    public:
    int varbase;
    void display()//This is run time polymorphism.
    {
        cout<<"Displaying base class variable "<<varbase<<endl;
    }
};
class Derivedclass: public Baseclass
{
    public:
    int varderived;
    void display()
    {
        cout<<"Displaying base class variable "<<varbase<<endl;
        cout<<"Displaying derived class variable "<<varderived<<endl;
    }
};
int main(){
    Baseclass* baseclassptr;
    Baseclass baseclassobj;
    Derivedclass* derivedclassptr;
    Derivedclass derivedclassobj;
    baseclassptr=&derivedclassobj;//A base class pointer can point to a derived class object but vice versa is not true.
    // derivedclassptr=&baseclassobj;This will throw error.
    baseclassptr->varbase=35;//Even though the pointer is pointing to derived class object but it still can modify its own class variables.
    // baseclassptr->varderived=34;//This will give error.
    baseclassptr->display();//It runs base class display even though base class pointer points to derived class object.
    // derivedclassptr->varderived=56;
    // derivedclassptr->varbase=57;
    derivedclassptr->display();//It runs derived class display.Also it doesnt consider the value of varbase given by baseclass pointer and gives garbage value.It only considers the value given by derived class pointer.
    derivedclassptr=&derivedclassobj;//but if we point derived class pointer to derived class object then it is considering the value given by base class pointer to varbase.
    derivedclassptr->varderived=44;
    derivedclassptr->display();
    return 0;
}