#include <iostream>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

public:
    void setDay(int d)
    {
        while (d < 1 || d > 31)
        {
            cout << "Invalid day entered Plz enter between (1-31) = " << endl;
            cin >> d;
        }
        day = d;
    }
    void setMonth(int m)
    {
        month = m;
        while (m < 1 || m > 12)
        {
            cout << "Invalid month entered Plz enter between (1-12) = " << endl;
            cin >> m;
        }
    }
    void setYear(int y) { year = y; }

    string getMonth() const
    {
        switch (month)
        {
        case 1:
            return "January";
        case 2:
            return "Febuary";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            return "Invalid Month";
        }
    }
    void displayDate1()
    {
        cout << month << "/" << day << "/" << year << endl;
    }
    void displayDate2()
    {

        cout << getMonth() << " " << day << "," << year << endl;
    }
    void displayDate3()
    {
        cout << day << " " << getMonth() << " " << year << endl;
    }
};
void userInput(Date &d)
{
    int day, month, year;

    cout << "Enter the day = ";
    cin >> day;
    d.setDay(day);

    cout << "Enter the month = ";
    cin >> month;
    d.setMonth(month);

    cout << "Enter the year = ";
    cin >> year;
    d.setYear(year);
}
int main()
{
    Date dt;
    userInput(dt);
    dt.displayDate1();
    dt.displayDate2();
    dt.displayDate3();

    return 0;
}