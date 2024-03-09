#include <iostream>
#include <string>
using namespace std;

class DivSales
{
private:
    double quarterSales[4];
    static double totalCorporateSales;

public:
    void qtrSales(double q1, double q2, double q3, double q4)
    {
        quarterSales[0] = q1;
        quarterSales[1] = q2;
        quarterSales[2] = q3;
        quarterSales[3] = q4;
        for (int i = 0; i < 4; i++)
        {
            totalCorporateSales += quarterSales[i];
        }
    }
    double getTotalCorporateSales() const
    {
        return totalCorporateSales;
    }
    double getQuarterSales(int num) const
    {
        return quarterSales[num];
    }
};
double DivSales::totalCorporateSales = 0.0;
void inputValidate(double &num)
{
    while (num < 0)
    {
        cout << "Invalid Value ! Quarter Sales should be positive Plz enter (>0) value = $";
        cin >> num;
    }
}
int main()
{
    DivSales divisions[6];
    double q1, q2, q3, q4;
    for (int i = 0; i < 6; i++)
    {
        cout << "Division " << i + 1 << " :" << endl;
        cout << "Enter the sales of first quarter = $";
        cin >> q1;
        inputValidate(q1);
        cout << "Enter the sales of second quarter = $";
        cin >> q2;
        inputValidate(q2);
        cout << "Enter the sales of third quarter = $";
        cin >> q3;
        inputValidate(q3);
        cout << "Enter the sales of fourth quarter = $";
        cin >> q4;
        inputValidate(q4);
        divisions[i].qtrSales(q1, q2, q3, q4);
    }
    cout << "Here are the quarter sales of six divisions : " << endl;
    for (int j = 0; j < 6; j++)
    {
        cout << "Division " << j + 1 << " :" << endl;
        for (int i = 0; i < 4; i++)
        {
            cout << "Quarter Sales = $" << divisions[j].getQuarterSales(i) << endl;
        }
    }
    cout << "Total Corporate Sales = $" << divisions[0].getTotalCorporateSales() << endl;
    return 0;
}