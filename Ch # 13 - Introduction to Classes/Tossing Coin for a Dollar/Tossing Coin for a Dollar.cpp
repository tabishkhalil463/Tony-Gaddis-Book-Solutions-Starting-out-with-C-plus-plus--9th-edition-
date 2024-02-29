#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Coin
{
private:
    string sideUp;

public:
    Coin()
     {
        toss();
    }
    void toss()
    {
        int r = rand() % 2;
        if (r == 0)
            sideUp= "Heads";
        else
            sideUp="Tails";
    }
    string getSideUp() const
    {
        return sideUp;
    }
};

int main()
{
    srand(time(NULL));

    Coin quarter;
    Coin nickel;
    Coin dime;

    double balance = 0;
    while (balance < 100)
    {
        quarter.toss();
        if (quarter.getSideUp() == "Heads")
            balance += 25;
        dime.toss();
        if (dime.getSideUp() == "Heads")
            balance += 10;
        nickel.toss();
        if (nickel.getSideUp() == "Heads")
            balance += 5;
    }
    cout << "Balance = $" << balance/100 << endl;
    if (balance == 100)
        cout << "Congratulations you win the game " << endl;
    else if (balance > 100)
        cout << "You lose the game " << endl;

    return 0;
}