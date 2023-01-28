#include<iostream>
#include<string>
using namespace std;
class binaryno
{
   private:
   string s;
   public:
   void read(void);
   void checkbin(void);
   void display(void);
   void onescompliment(void);
};
void binaryno::read(void)
{
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}
void binaryno::checkbin(void)
{
    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1' )
        {
            cout<<"Not a binary number"<<endl;
            exit(0);
        }
    }
}
void binaryno::onescompliment(void)
{
    checkbin();

    for(int i=0; i<s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void binaryno::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    cout<<s<<endl;
}

int main(){
    binaryno b;
    b.read();
    b.display();
    b.checkbin();
    b.onescompliment();
    b.display();
       
    return 0;
}