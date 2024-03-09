#include <iostream>
using namespace std;

class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    Inventory() : itemNumber(0), quantity(0), cost(0.0), totalCost(0.0) {}
    Inventory(int itemNum, int q, double c) : itemNumber(itemNum), quantity(q), cost(c)
    {
        setTotalCost();
    }
    void setItemNumber(int itemNum)
    {
        itemNumber = itemNum;
    }
    void setQuantity(int q)
    {
        quantity = q;
    }
    void setCost(double c)
    {
        cost = c;
    }
    void setTotalCost()
    {
        totalCost = (cost * quantity);
    }
    int getItemNumber() const
    {
        return itemNumber;
    }
    int getQuantity() const
    {
        return quantity;
    }
    double getCost() const
    {
        return cost;
    }
    double getTotalCost() const
    {
        return totalCost;
    }
    void display()
    {
        cout << "Item Number = " << getItemNumber() << endl;
        cout << "Quantity = " << getQuantity() << endl;
        cout << "Cost = $" << getCost() << endl;
        cout << "Total Cost = $" << getTotalCost() << endl;
    }
};

class CashRegister
{
public:
    double itemUnitPrice(Inventory i)
    {
        double c;
        c=0.3+i.getCost();
        return c;
    }
    double purchaseSubTotal(Inventory i,double c)
    {
        double subTotal;
        subTotal=c*i.getQuantity();
        return subTotal;
    }
    void purchaseTotal(double subT)
    {
        double purTotal;
        purTotal=subT*0.06;
        cout<<"Tax = "<<purTotal<<endl;
        double total=purTotal+subT;
        cout<<"Purchase Total = $"<<total<<endl;
    }
};
int main()
{
    Inventory inven(2, 7, 30.8);
    inven.display();
    cout << endl;

    Inventory inventory;

    int itemNum;
    int quantity;
    double cost;

    cout << "Enter the item number = ";
    cin >> itemNum;
    while (itemNum < 0)
    {
        cout << "Invalid number plz enter positive number (>0) = ";
        cin >> itemNum;
    }
    inventory.setItemNumber(itemNum);

    cout << "Enter the quantity = ";
    cin >> quantity;
    while (quantity < 0)
    {
        cout << "Invalid number plz enter positive number (>0) = ";
        cin >> quantity;
    }
    inventory.setQuantity(quantity);

    cout << "Enter the cost = $";
    cin >> cost;
    while (cost < 0)
    {
        cout << "Invalid number plz enter positive number (>0) = ";
        cin >> cost;
    }
    inventory.setCost(cost);

    inventory.setTotalCost();
    cout<<endl;
    inventory.display();
    CashRegister cR;

    double c=cR.itemUnitPrice(inventory);
    cout<<"Item Unit Price = $"<<c<<endl;
    double subTotal=cR.purchaseSubTotal(inventory,c);
    cout<<"Purchase Sub Total = $"<<subTotal<<endl;
    cR.purchaseTotal(subTotal);

    cout << endl;

    return 0;
}