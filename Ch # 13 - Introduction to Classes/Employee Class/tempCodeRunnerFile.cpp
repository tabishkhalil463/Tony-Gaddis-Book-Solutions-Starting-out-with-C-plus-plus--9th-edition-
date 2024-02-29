#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    string department;
    string position;

public:
    Employee(string n, int idNum, string dept, string p) : name(n), id(idNum), department(dept), position(p) {}
    Employee(string n, int idNum) : name(n), id(idNum), department(""), position("") {}
    Employee() : name(""), id(0), department(""), position("") {}
    void setName(string n)
    {
        name = n;
    }
    void setDepartment(string dept)
    {
        department = dept;
    }
    void setPosition(string p)
    {
        position = p;
    }
    void setIdNum(int idNum)
    {
        id = idNum;
    }
    int getIdNum() const
    {
        return id;
    }
    string getName() const
    {
        return name;
    }
    string getDepartment() const
    {
        return department;
    }
    string getPosition() const
    {
        return position;
    }
    void display()
    {
        cout << "Name = " << getName() << endl;
        cout << "IdNum = " << getIdNum() << endl;
        cout << "Department = " << getDepartment() << endl;
        cout << "Position = " << getPosition() << endl;
    }
};

int main()
{
    Employee emp1("Susan Meyers", 47899, "Accounting", "Vice President");

    Employee emp2("Mark Jones", 39119);
    emp2.setDepartment("IT");
    emp2.setPosition("Programmer");

    Employee emp3;
    emp3.setDepartment("Manufacturing");
    emp3.setPosition("Engineer");
    emp3.setName("Joy Rogers");
    emp3.setIdNum(81774);

    emp1.display();
    cout<<endl;

    emp2.display();
    cout<<endl;

    emp3.display();
    cout<<endl;

    return 0;
}