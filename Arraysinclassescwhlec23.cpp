#include <iostream>
using namespace std;
class Shop
{
private:
    int id[100];
    int price[100];

public:
    int j = 0;
    void setprice(void);
    void displayprice(void);
};
void Shop::setprice(void)
{

    cout << "Enter the id of your item" << endl;
    cin >> id[j];
    cout << "Enter the price of the item" << endl;
    cin >> price[j];
    j++;
}
void Shop::displayprice(void)
{
    cout << "The price of item with id " << id[j] << " is " << price[j] << endl;
    j++;
}
int main()
{
    int n;
    cout << "Enter the number of items that you want to buy" << endl;
    cin >> n;
    Shop s;
    for (int i = 0; i < n; i++)
    {
        s.setprice();
    }
    s.j = 0;
    for (int i = 0; i < n; i++)
    {
        s.displayprice();
    }

    return 0;
}