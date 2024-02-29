#include <iostream>
using namespace std;

class Patient
{
private:
    string firstName;
    string middleName;
    string lastName;
    string address;
    string city;
    string state;
    int zipCode;
    string phoneNumber;
    string nameOfPersonInEmergency;
    string phoneNumberOfPersonInEmergency;

public:
    // contructor
    Patient(string fname, string mName, string lname, string addrss, string cty, string st, int zpCode, string phNum, string eName, string ePhoneNumber) : firstName(fname), middleName(mName), lastName(lname), address(addrss), city(cty), state(st), zipCode(zpCode), phoneNumber(phNum), nameOfPersonInEmergency(eName), phoneNumberOfPersonInEmergency(ePhoneNumber) {}
    // mutator
    void setFirstName(string fname)
    {
        firstName = fname;
    }
    void setMiddleName(string mname)
    {
        middleName = mname;
    }
    void setLastName(string lname)
    {
        lastName = lname;
    }
    void setAddress(string addrss)
    {
        address = addrss;
    }
    void setCity(string cty)
    {
        city = cty;
    }
    void setState(string st)
    {
        state = st;
    }
    void setZipCode(int zpCode)
    {
        zipCode = zpCode;
    }
    void setPhoneNumber(string phNum)
    {
        phoneNumber = phNum;
    }
    void setNameOfPersonInEmergency(string eName)
    {
        nameOfPersonInEmergency = eName;
    }
    void setPhoneNumberOfPersonInEmergency(string ePhoneNumber)
    {
        phoneNumberOfPersonInEmergency = ePhoneNumber;
    }
    // accessor
    string getFirstName() const
    {
        return firstName;
    }
    string getMiddleName() const
    {
        return middleName;
    }
    string getLastName() const
    {
        return lastName;
    }
    string getAddress() const
    {
        return address;
    }
    string getCity() const
    {
        return city;
    }
    string getState() const
    {
        return state;
    }
    int getZipCode() const
    {
        return zipCode;
    }
    string getPhoneNumber() const
    {
        return phoneNumber;
    }
    string getNameOfPersonInEmergency() const
    {
        return nameOfPersonInEmergency;
    }
    string getPhoneNumberOfPersonInEmergency() const
    {
        return phoneNumberOfPersonInEmergency;
    }
    void displayPatientDetails()
    {
        cout << "Details of Patient :" << endl;
        cout << "First name = " << getFirstName() << endl;
        cout << "Middle name = " << getMiddleName() << endl;
        cout << "Last name = " << getLastName() << endl;
        cout << "Adress = " << getAddress() << endl;
        cout << "City = " << getCity() << endl;
        cout << "State = " << getState() << endl;
        cout << "Zip Code = " << getZipCode() << endl;
        cout << "Phone number = " << getPhoneNumber() << endl;
        cout << "Emergency Name = " << getNameOfPersonInEmergency() << endl;
        cout << "Emergency Phone Number = " << getPhoneNumberOfPersonInEmergency() << endl;
    }
};
class Procedure
{
private:
    string nameOfProcedure;
    string date;
    string nameOfPractitioner;
    double charges;

public:
    // contructor
    Procedure(string name, string d, string nP, double c) : nameOfProcedure(name), date(d), nameOfPractitioner(nP), charges(c) {}
    // mutator
    void setNameOfProcedure(string name)
    {
        nameOfProcedure = name;
    }
    void setDate(string d)
    {
        date = d;
    }
    void setNameOfPractitioner(string nP)
    {
        nameOfPractitioner = nP;
    }
    void setCharge(double c)
    {
        charges = c;
    }
    // accessor
    string getNameOfProcedure() const
    {
        return nameOfProcedure;
    }
    string getDate() const
    {
        return date;
    }
    string getNameOfPractitioner() const
    {
        return nameOfPractitioner;
    }
    double getCharges() const
    {
        return charges;
    }
    void displayProcedureDetails()
    {
        cout << "Name of Procedure = " << getNameOfProcedure() << endl;
        cout << "Date = " << getDate() << endl;
        cout << "Name of Practitioner = " << getNameOfPractitioner() << endl;
        cout << "Charge = $" << getCharges() << endl;
    }
};

int main()
{
    Patient pt("Muhammad", "Tabish", "Khalil", "House 278 B Street 5", "Lahore", "Pakistan", 54000, "03367411322", "Sarmad Khalil", "03234111696");
    Procedure p1("Physical Exam", "27 February 2024", "Dr. Irvine", 250.00);
    Procedure p2("X-ray", "28 February 2024", "Dr.Jamison", 500.00);
    Procedure p3("Blood Test", "01 March 2024", "Dr. Smith", 200.00);

    pt.displayPatientDetails();
    cout << "Procedure 1 :" << endl;
    p1.displayProcedureDetails();
    cout << "Procedure 2 :" << endl;
    p2.displayProcedureDetails();
    cout << "Procedure 3 :" << endl;
    p3.displayProcedureDetails();

    double totalCharges = 0;

    totalCharges=p1.getCharges() + p2.getCharges() + p3.getCharges();

    cout<<"Total Charges of three procedures are = $"<< totalCharges<<endl;

    return 0;
}