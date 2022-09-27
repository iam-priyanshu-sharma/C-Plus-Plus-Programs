#include <iostream>
#include <string.h>

using namespace std;

class Invoice
{
private:
    string pro_code, pro_name;
    int quantity;
    float total, rate;

public:
    Invoice()
    {
        cout << "\nEnter Product Code:";
        getline(cin, pro_code);
        cout << "\nEnter Product name:";
        getline(cin, pro_name);
        cout << "\nEnter Product rate:";
        cin >> rate;
        cout << "\nEnter Product Quantity:";
        cin >> quantity;
        cout << "\nProduct code\tProduct Name\tRate\tQuantity\tTotal";
        cout << "\n"
             << pro_code << "\t" << pro_name << "\t" << rate << "\t  " << quantity << "\t\t" << rate * quantity;
    }
};
int main()
{
    Invoice I;
    return 0;
}