#include <iostream>
using namespace std;

class TestScores
{
private:
    double scores[3];

public:
    TestScores()
    {
        for (int i = 0; i < 3; i++)
        {
            scores[i] = 0.0;
        }
    }
    void setScores(int i, double s)
    {
        if (i >= 0 && i < 3)
            scores[i] = s;
    }
    // double getScores(int i) const
    // {
    //     if (i >= 0 && i < 3)
    //         return scores[i];
    // }
    double average()
    {
        double sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += scores[i];
        }
        return sum / 3;
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Scores are = " << scores[i] << "  " << endl;
        }
    }
};
int main()
{
    TestScores scores;

    for (int i = 0; i < 3; i++)
    {
        double s;
        cout << "Enter the test score " << i + 1 << " = ";
        cin >> s;
        scores.setScores(i, s);
    }
    scores.display();
    cout << "Average = " << scores.average() << endl;

    return 0;
}