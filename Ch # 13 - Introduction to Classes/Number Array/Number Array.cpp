#include <iostream>
using namespace std;

class NumberArray
{
private:
    float *array;
    int size;

public:
    NumberArray(int size)
    {
        this->size = size;
        array = new float[size];
    }
    ~NumberArray()
    {
        if (array != nullptr)
            delete[] array;
    }
    void storeNumber(int i, float n)
    {
        if (i >= 0 && i < size)
            array[i] = n;
        else
            cout << "Invalid index";
    }
    float retrieveNumber(int i)
    {
        if (i < 0 && i > size)
        {
            cout << "Invalid index";
            return 0;
        }
        else
            return array[i];
    }
    float getHighest()
    {
        float highest = array[0];
        for (int i = 1; i < size; i++)
        {
            if (array[i] > highest)
                highest = array[i];
        }
        return highest;
    }
    float getLowest()
    {
        float lowest = array[0];
        for (int i = 1; i < size; i++)
        {
            if (array[i] < lowest)
                lowest = array[i];
        }
        return lowest;
    }
    float getAverage()
    {
        float sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += array[i];
        }
        return sum / size;
    }
};

int main()
{
    NumberArray arr(5);

    float n;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value at index " << i << " = ";
        cin >> n;
        arr.storeNumber(i, n);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Retrieved number at index " << i << " = " << arr.retrieveNumber(i) << endl;
    }
    cout << "Highest number = " << arr.getHighest() << endl;
    cout << "Lowest number = " << arr.getLowest() << endl;
    cout << "Average = " << arr.getAverage() << endl;

    return 0;
}