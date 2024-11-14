#include <iostream>
#include <string>
using namespace std;

// Base class: University
class University {
protected:
    string universityName;

public:
    University() : universityName("Adamas University") {}

    void displayUniversityInfo() const {
        cout << "University Name: " << universityName << endl;
    }
};

// Intermediate class: Department (inherits from University)
class Department : public University {
protected:
    string departmentName;

public:
    Department(string deptName) : departmentName(deptName) {}

    void displayDepartmentInfo() const {
        cout << "Department: " << departmentName << endl;
    }
};

// Intermediate class: Student (inherits from University)
class Student : public University {
protected:
    string studentName;
    int studentID;

public:
    Student(string name, int id) : studentName(name), studentID(id) {}

    void displayStudentInfo() const {
        cout << "Student Name: " << studentName << endl;
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class: Exam (inherits from both Department and Student)
class Exam : public Department, public Student {
private:
    string examName;
    int marks;

public:
    Exam(string deptName, string name, int id, string exName, int m)
        : Department(deptName), Student(name, id), examName(exName), marks(m) {}

    void displayExamInfo() const {
        displayUniversityInfo();
        displayDepartmentInfo();
        displayStudentInfo();
        cout << "Exam: " << examName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Creating an Exam object for a student
    Exam exam("Computer Science", "Rishav SAhu", 162, "Final Exam", 92);

    // Displaying exam information
    cout << "Examination Details:" << endl;
    exam.displayExamInfo();

    return 0;
}
