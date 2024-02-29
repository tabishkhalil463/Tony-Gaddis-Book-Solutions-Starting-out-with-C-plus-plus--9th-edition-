#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

struct Student 
{
    string name;
    string id;
    int *tests;
    float average;
    char grade;
};

void calculate_average(Student &student, int num_tests) 
{
    float total = 0;
    for (int i = 0; i < num_tests; i++) {
        total += student.tests[i];
    }
    student.average = total / num_tests;
}

char calculate_grade(float average) 
{
    if (average >= 91) return 'A';
    else if (average >= 81) return 'B';
    else if (average >= 71) return 'C';
    else if (average >= 61) return 'D';
    else return 'F';
}

int main() {
    int num_students, num_tests;

    cout << "Enter the number of students: ";
    cin >> num_students;

    cout << "Enter the number of tests: ";
    cin >> num_tests;

    // Dynamically allocate array of structures
    Student *students = new Student[num_students];

    for (int i = 0; i < num_students; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;

        cout << "ID: ";
        cin >> students[i].id;

        // Dynamically allocate array of test scores
        students[i].tests = new int[num_tests];

        // Input validation for test scores
        for (int j = 0; j < num_tests; j++) 
        {
            do {
                cout << "Test " << j + 1 << " score: ";
                cin >> students[i].tests[j];
            } while (students[i].tests[j] < 0); // Negative test score validation
        }

        calculate_average(students[i], num_tests);
        students[i].grade = calculate_grade(students[i].average);
    }

    // Displaying table
    cout << "\n\n" << setw(20) << left << "Name" << setw(15) << "ID" << setw(15) << "Average" << setw(10) << "Grade" << endl;
    for (int i = 0; i < num_students; i++) {
        cout << setw(20) << left << students[i].name << setw(15) << students[i].id << setw(15) << fixed << setprecision(2) << students[i].average << setw(10) << students[i].grade << endl;
    }

    // Free dynamically allocated memory
    for (int i = 0; i < num_students; i++) 
    {
        delete[] students[i].tests;
    }
    delete[] students;

    return 0;
}
