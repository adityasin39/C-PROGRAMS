#include<iostream>
#include<cmath>
using namespace std;


class simpleCalculator
{
    float a,b;
    public:
        void getDataSimple()
        {
            cout<<"Enter first number"<<endl;
            cin>>a;
            cout<<"Enter second number"<<endl;
            cin>>b;
        }
        void displaySimple(){
            int num;
            cout<<"1. Add\n2. Subtract\n3. Multiply\n4. Divide"<<endl;
            cin>>num;
            if (num == 1){
                cout<<a<<" + "<<b<<" = "<<a+b;
            }
            else if (num == 2){
                cout<<a<<" - "<<b<<" = "<<a-b;
            }
            else if (num == 3){
                cout<<a<<" x "<<b<<" = "<<a*b;
            }
            else if (num == 4){
                cout<<a<<" / "<<b<<" = "<<a/b;
            }
        }

};
class scientificCalculator
{
    float x;
    public:
        void getDataScientific()
        {
            cout<<"Enter first number"<<endl;
            cin>>x;
        }
        void displayScientific(){
            int num;
            cout<<"1. Sin(a)\n2. Cos(a)\n3. Tan(a)\n4. Exp(a)"<<endl;
            cin>>num;
            if (num == 1){
                cout<<"The value of sin("<<x<<") is "<<sin(x)<<endl;
            }
            else if (num == 2){
                cout<<"The value of cos("<<x<<") is "<<cos(x)<<endl;
            }
            else if (num == 3){
                cout<<"The value of tan("<<x<<") is "<<tan(x)<<endl;
            }
            else if (num == 4){
                cout<<"The value of exp("<<x<<") is "<<exp(x)<<endl;
            }
        }
};
class HybridCalculator : public simpleCalculator , public scientificCalculator
{

};

int main(){
    int choice;
    HybridCalculator calc;
    cout<<"Enter ""1"" to use simple calculator\nEnter ""2"" to use Scientific calculator"<<endl;
    cin>>choice;
    if (choice == 1)
    {
        calc.getDataSimple();
        calc.displaySimple();
    }
    if (choice == 2)
    {
        calc.getDataScientific();
        calc.displayScientific();
    }
    
    return 0;
}
