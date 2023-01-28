#include<iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float roi;
    int Roi;
    float returnvalue;
   public:
   BankDeposit(void)
   {}
   BankDeposit(int p, int y, float r)
   {
       principal=p;
       years=y;
       roi=r;
     returnvalue=principal;
     for(int i=0; i<y; i++)
     {
         returnvalue=returnvalue*(1+r);
     }
   }
   BankDeposit(int p, int y, int R)
   {
       principal=p;
       years=y;
       Roi=R;
       returnvalue=principal;
       for(int i=0; i<y; i++)
       {
           returnvalue=returnvalue*(1+float(R)/100);
       }
   }
   void printamount()
   {
       cout<<"The principal amout was Rs. "<<principal<<" and after "<<years<<" years , the returnvalue is "<<returnvalue<<endl;
   }
};
int main(){
    int p,y;
    float r;
    int R;
   BankDeposit bd1,bd2,bd3;
   bd1.printamount();
     cout<<"Enter the value of principal amount, period of years and rate of interest"<<endl;
   cin>>p>>y>>r;
   bd2=BankDeposit(p,y,r);
   bd2.printamount();
    cout<<"Enter the value of principal amount, period of years and rate of interest"<<endl;
   cin>>p>>y>>R;
   bd3=BankDeposit(p,y,R);
   bd3.printamount(); 
    return 0;
}