#include<iostream>

using namespace std;

class student
{
    char name[10];
    int roll;
    float mark;
    void display()
    {
        cout << endl << "Name: " << name << endl << "Roll number: " << roll << endl << "Enter marks: " << mark;
    }

public:

    void studetails()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks: ";
        cin >> mark;

        display();
    }

}s1;

int main()
{
    s1.studetails();
    return 0;
}
