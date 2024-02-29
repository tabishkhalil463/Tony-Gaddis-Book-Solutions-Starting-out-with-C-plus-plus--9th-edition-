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
            sideUp="Heads";
        else
            sideUp= "Tails";
    }
    string getSideUp() const
    {
        return sideUp;
    }
    void display()
    {
        cout << "Side Up = " << getSideUp() << endl;
    }
};

int main()
{
    srand(time(NULL));
    Coin c;
    c.display();
    int numHeads = 0;
    int numTails = 0;

    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << " Iteration : " << endl;
        c.toss();
        c.display();
        cout << endl;
        if (c.getSideUp() == "Heads")
            numHeads++;
        else
            numTails++;
    }
    cout << "Number of Times head appears = " << numHeads << endl;
    cout << "Number of Times tails appears = " << numTails << endl;

    return 0;
}