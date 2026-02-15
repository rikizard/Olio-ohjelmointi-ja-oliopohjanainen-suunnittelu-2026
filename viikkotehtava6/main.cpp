#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#include "Student.h"

using namespace std;

int main()
{
    int selection = 0;
    vector<Student> studentList;

    do
    {
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cin >> selection;

        switch (selection)
        {
        case 0:
        {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            string name;
            int age;

            cout << "Give student name: ";
            cin >> name;

            cout << "Give student age: ";
            cin >> age;

            studentList.push_back(Student(name, age));
            break;
        }

        case 1:
        {
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet.
            for (const Student& s : studentList)
            {
                cout << s.getName() << endl;
            }
            break;
        }

        case 2:
        {
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            sort(studentList.begin(), studentList.end(),
                 [](const Student& a, const Student& b)
                 {
                     return a.getName() < b.getName();
                 });

            // Tulosta printStudentInfo() avulla
            for (const Student& s : studentList)
            {
                s.printStudentInfo();
            }
            break;
        }

        case 3:
        {
            // Järjestä StudentList vektorin Student oliot iän mukaan
            sort(studentList.begin(), studentList.end(),
                 [](const Student& a, const Student& b)
                 {
                     return a.getAge() < b.getAge();
                 });

            // Tulosta printStudentInfo() avulla
            for (const Student& s : studentList)
            {
                s.printStudentInfo();
            }
            break;
        }

        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListasta find_if avulla
            string searchName;
            cout << "Give student name to find: ";
            cin >> searchName;

            auto it = find_if(studentList.begin(), studentList.end(),
                              [searchName](const Student& s)
                              {
                                  return s.getName() == searchName;
                              });

            if (it != studentList.end())
            {
                it->printStudentInfo();
            }
            else
            {
                cout << "Student not found." << endl;
            }
            break;
        }

        default:
            cout << "Wrong selection, stopping..." << endl;
            break;
        }

    } while (selection < 5);

    return 0;
}
