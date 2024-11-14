#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPersonalInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    int studentID;
    string course;

public:
    Student(string n, int a, int id, string c) 
        : Person(n, a), studentID(id), course(c) {}

    void displayStudentInfo() const {
        displayPersonalInfo(); // Calls base class method
        cout << "Student ID: " << studentID << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    // Creating a Student object
    Student student("Rishav sahu", 20, "UG/02/BTCSE/2023/162", "Computer Science");

    // Displaying student information
    cout << "Student Registration Details:" << endl;
    student.displayStudentInfo();

    return 0;
}
