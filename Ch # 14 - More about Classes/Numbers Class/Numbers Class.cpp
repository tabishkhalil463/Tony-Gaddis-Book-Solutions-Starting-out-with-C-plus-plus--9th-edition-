#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
    int number;
    static string lessThan20[20];
    static string tens[10];
    static string hundred;
    static string thousand;

public:
    Numbers(int num) : number(num) {}
    string print()
    {
        string result;
        if (number == 0)
            return result = "Zero";
        if (number >= 1000)
        {
            result += lessThan20[number / 1000] + " " + thousand + " ";
            number = number % 1000;
        }
        if (number >= 100)
        {
            result += lessThan20[number / 100] + " " + hundred + " ";
            number = number % 100;
        }
        if (number > 10)
        {
            result += tens[number / 10] + " ";
            number = number % 10;
        }
        if (number > 0)
        {
            result += lessThan20[number];
        }

        return result;
    }
};
string Numbers::lessThan20[20] = {"", "One", "Two", "Three", "Four", "Five", "Six",
                                  "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve",
                                  "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string Numbers::tens[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
string Numbers::hundred = "Hundred";
string Numbers::thousand = "Thousand";

int input()
{
    int num;
    cout << "Enter the number (0-9999) = ";
    cin >> num;
    while (num < 0 || num > 9999)
    {
        cout << "Invalid Number Plz enter the number within the range (0-9999) = ";
        cin >> num;
    }
    return num;
}

int main()
{
    int n = input();
    Numbers n1(n);
    string str = n1.print();
    cout << "Desired String = " << str << endl;
    return 0;
}