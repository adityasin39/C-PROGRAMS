#include <iostream>
using namespace std;
class Shopitem
{
private:
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The id of this item is " << id << endl;
        cout << "The price of this item is " << price << endl;
    }
};
int main()
{
    int p;
    float q;
    Shopitem *ptr = new Shopitem[3];
    Shopitem *ptrtemp = ptr;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the id of the item" << endl;
        cin >> p;
        cout << "Enter the price of the item" << endl;
        cin >> q;
        ptr->setData(p, q);
        ptr++; // Jab last wale object ke liye loop chalega tab ptr++ ke wajah se array ke bahar ptr point karne lagega so we have made ptrtemp which is equal to ptr that is pointing to first object and thus we have used it for printing values in the second loop.
    }
    for (int i = 0; i < 3; i++)
    {
        ptrtemp->getData();
        ptrtemp++;
    }
    return 0;
}