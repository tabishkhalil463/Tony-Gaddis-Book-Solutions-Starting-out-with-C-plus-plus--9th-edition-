#include <iostream>
using namespace std;

class Payroll
{
private:
    double hourlyPayRate;
    int numberOfHoursWorked;
    double totalPay;

public:
    void setHourlyPayRate(double payRate)
    {
        hourlyPayRate = payRate;
    }
    void setNumberOfHoursWorked(int num)
    {
        numberOfHoursWorked = num;
    }
    void setTotalPay()
    {
        totalPay = 7 * (numberOfHoursWorked * hourlyPayRate);
    }
    int getNumberOfHoursWorked() const
    {
        return numberOfHoursWorked;
    }
    double getHourlyPayRate() const
    {
        return hourlyPayRate;
    }
    double getTotalPay() const
    {
        return totalPay;
    }
};

int main()
{
    Payroll payroll[7];

    double payrate;
    cout << "Enter the hourly pay rate  = $";
    cin >> payrate;

    for (int i = 0; i < 7; i++)
    {
        int hours;
        cout << "Enter the number of hours of employee " << i + 1 << " = ";
        cin >> hours;
        while (hours > 60)
        {
            cout << "Hours exceed Plz enter (>60) = ";
            cin >> hours;
        }
        payroll[i].setNumberOfHoursWorked(hours);
        payroll[i].setHourlyPayRate(payrate);
        payroll[i].setTotalPay();
    }
    cout<<endl;
    for (int i = 0; i < 7; i++)
    {
        double grossPay;
        grossPay = payroll[i].getNumberOfHoursWorked() * payrate;
        cout << "Gross pay rate of employee " << i + 1 << " = $" << grossPay << endl;
    }
    cout<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout << "Weekly pay of employee " << i + 1 << " is = $" << payroll[i].getTotalPay() << endl;
    }
    cout<<endl;
    return 0;
}