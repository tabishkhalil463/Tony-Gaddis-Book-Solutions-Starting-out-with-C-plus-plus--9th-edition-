#include <iostream>
#include <string>
using namespace std;

class DayOfYear
{
private:
    int day;
    static string months[12];
    static int totalDaysInMonths[12];

public:
    DayOfYear(int d) : day(d){};
    string print()
    {
        string result;
        int index = 0;
        for (int i = 0; i < 12; i++)
        {
            if (day > totalDaysInMonths[i])
            {
                day = day - totalDaysInMonths[i];
                index++;
            }
            else
                break;
        }
        result += months[index] + " " + to_string(day);
        return result;
    }
};
string DayOfYear::months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int DayOfYear::totalDaysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int input()
{
    int num;
    cout << "Enter the day of the year (1-365) = ";
    cin >> num;
    while (num <= 0 || num > 365)
    {
        cout << "Invalid Day entered Plz enter day (1-365) = ";
        cin >> num;
    }
    return num;
}

int main()
{
    int n = input();
    DayOfYear doy(n);
    string str = doy.print();
    cout << "Desired Day = " << str << endl;
    return 0;
}