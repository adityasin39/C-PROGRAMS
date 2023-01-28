#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number you want multiplication table of\n";
    cin>>a;
    for(int i=1; i<=10; i++)
    {
        cout<<a<<"X"<<i<<"="<<a*i<<endl;
    }
    
    return 0;
}
