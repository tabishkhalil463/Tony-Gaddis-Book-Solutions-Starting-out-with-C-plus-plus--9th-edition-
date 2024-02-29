#include <iostream>
using namespace std;

class RetailItem
{
private:
    string description;
    int unitsOnHand;
    double price;

public:
    RetailItem(string d, int u, double p) : description(d), unitsOnHand(u), price(p) {}
    void setDescription(string d)
    {
        description = d;
    }
    void setUnitsOnHand(int u)
    {
        unitsOnHand = u;
    }
    void setPrice(double p)
    {
        price = p;
    }
    string getDescription() const
    {
        return description;
    }
    int getUnitsOnHand() const
    {
        return unitsOnHand;
    }
    double getPrice() const
    {
        return price;
    }
    void display()
    {
        cout << "Description = " << getDescription() << endl;
        cout << "UnitsOnHand = " << getUnitsOnHand() << endl;
        cout << "Price = $" << getPrice() << endl;
    }
};

int main()
{
    RetailItem r1("Jacket", 12, 59.95);
    RetailItem r2("Designer Jeans", 40, 34.95);
    RetailItem r3("Shirts", 20, 24.95);
    
    r1.display();
    cout<<endl;
    r2.display();
    cout<<endl;
    r3.display();
    
    return 0;
}